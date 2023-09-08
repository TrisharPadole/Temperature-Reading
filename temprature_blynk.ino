#define BLYNK_TEMPLATE_ID "TMPL3sgLV3pEM"
#define BLYNK_TEMPLATE_NAME "DHT IOT Sensor"
#define BLYNK_AUTH_TOKEN "m7dRuPdGiExxfXOyjYjq_xg59q6F0Pfd"

#include <DHT.h>
#include <BlynkSimpleEsp8266.h>

#define DHTPIN 4// data pin is connected to d2 on ESP
#define DHTTYPE DHT11// Name the sensor as an object


char auth[] = "m7dRuPdGiExxfXOyjYjq_xg59q6F0Pfd";
char ssid[] = "wifi";
char pass[] = "123456678";

DHT test(DHTPIN, DHTTYPE);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("DHT Test Successful!");
  Blynk.begin(auth,ssid,pass);
  Serial.println("Blynk Connected Successfully");
  test.begin();

}

void loop() {
  // put your main code here, to run repeatedly:
  float h = test.readHumidity();
  float t = test.readTemperature();
  float f = test.readTemperature(true);
  if (isnan(h) || isnan(t) || isnan(f))
  {
    Serial.println("Something is not working as intended.");
    return; 
  }
  Serial.println("Humidity:");
  Serial.print(h);
  Serial.println("%");
  Serial.println("Temprature:");
  Serial.print(t);
  Serial.println("degrees celsius.");
  Blynk.virtualWrite(V0,t);
  Blynk.virtualWrite(V1,h);
  delay(1000);
}
