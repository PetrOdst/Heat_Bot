
#include <Servo.h>
#include <SPI.h>
#include <DNSServer.h>
#include <ESP8266WebServer.h>
#include <WiFiManager.h>
#include <DHT.h>
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#define BLYNK_PRINT Serial
#define DHTPIN D3  
#define DHTTYPE DHT11 


DHT dht(DHTPIN, DHTTYPE);
BlynkTimer timer; 
int pos;
int pos1 =0 ;
int pos2 =180;

Servo servo,servo1, servo2 ;


char auth[] = "rDB0zCZ7rUC-f5PV59D4hOLGKZmgULY9";
void sendSensor()
{
  
  float t = dht.readTemperature();
  Blynk.virtualWrite(V5, t);
  
}
void setup()
{
    Serial.begin(9600);
    dht.begin();
    timer.setInterval(10000L, sendSensor);
    WiFiManager wifiManager;
    wifiManager.autoConnect("yodaheatbot");
    Serial.println("connected...yeey :)");
    Blynk.begin(auth, WiFi.SSID().c_str(), WiFi.psk().c_str());

}


void loop()
{
  
  Blynk.run();
  sendSensor();

 


}

   BLYNK_WRITE(V2){

 if (param.asInt() == 1){
    servo2.attach(D2);
    servo.attach(D1);
    servo1.attach(D4);
    
    delay(500);
    servo2.write(12);
    delay(500);
    servo.write(45);
    delay(700);
    servo1.write(120);
    delay(700);
    servo1.write(50);
    delay(700);
    servo.write(157);
     delay(500);
    servo2.write(180);
    delay(1000);
     servo.detach();
    servo1.detach();
    servo2.detach();
    
    }else{
     servo.detach();
    servo1.detach();
    servo2.detach();
    }
   
  
    }





BLYNK_WRITE(V6)
{ servo2.attach(D2);
 delay(50);
  servo2.write(param.asInt());
  delay(50);
  servo2.detach();
}


BLYNK_WRITE(V12)
{ servo.attach(D1);
 delay(50);
  servo.write(param.asInt());
  delay(50);
  servo.detach();
}

  BLYNK_WRITE(V9){
servo2.attach(D2);
 if (param.asInt() == 1){
  for(pos = pos1 ; pos <= pos2; pos= pos + 1){
  servo2.write(pos);
  Serial.println(pos1);
  Serial.println(pos);
  delay(5);
  }
 }
 servo2.detach();
  }

    BLYNK_WRITE(V10){
servo2.attach(D2);
 if (param.asInt() == 1){
  for(pos = pos2 ; pos >= pos1; pos= pos - 1){
  servo2.write(pos);
  Serial.println(pos1);
  Serial.println(pos);
  delay(5);
  }
 }
 servo2.detach();
  }
