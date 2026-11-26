
#include <ESP8266WiFi.h>
#include <KiwisIoT.h>
#include <DHT.h>

// WiFi Details
const char* ssid = "YOUR_WIFI_NAME";
const char* pass = "YOUR_WIFI_PASSWORD";

// KiwisIoT Dashboard Topic ID
const char* topic = "dash_1795674891703";

// DHT11 Sensor
#define DHT_PIN D4
#define DHTTYPE DHT11

// MQ135 Sensor
#define MQ135_PIN A0

DHT dht(DHT_PIN, DHTTYPE);

// KiwisIoT Connection
KiwisIoT kiwisiot(ssid, pass, topic);

void setup() {

  Serial.begin(115200);

  dht.begin();

  kiwisiot.begin();

  Serial.println("Smart Classroom Monitoring");
  Serial.println("System Started");

}

void loop() {

  // Maintain KiwisIoT connection
  kiwisiot.run();

  // Read DHT11
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  // Read MQ135
  int airQuality = analogRead(MQ135_PIN);

  if (isnan(temperature) || isnan(humidity)) {
    Serial.println("DHT11 Sensor Error!");
    delay(2000);
    return;
  }

  // Display readings
  Serial.println("----------------------");
  Serial.println("SMART CLASSROOM");

  Serial.print("Temperature: ");
  Serial.println(temperature);

  Serial.print("Humidity: ");
  Serial.println(humidity);

  Serial.print("Air Quality: ");
  Serial.println(airQuality);

  // Send data to KiwisIoT
  kiwisiot.send("0", temperature);
  kiwisiot.send("1", humidity);
  kiwisiot.send("2", airQuality);

  kiwisiot.run();

  Serial.println("Data Sent to KiwisIoT");

  Serial.println("----------------------");

  delay(3000);
}
