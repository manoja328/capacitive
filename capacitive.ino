#include <CapacitiveSensorDue.h>

CapacitiveSensorDue capacitiveSensor=CapacitiveSensorDue(4, 2);

int threshold =600;

void setup(){
 
 Serial.begin(9600); 
 pinMode(A0,OUTPUT);
  
}


void loop(){
  long sensorval= capacitiveSensor.read(30);
  Serial.println(sensorval);
  if (sensorval > threshold){
    Serial.println("ON");
    digitalWrite(A0,HIGH);
  }
    
   else{
     Serial.println("OFF");
     digitalWrite(A0,LOW);
     
   }
     
     delay(10);
  
  
}
