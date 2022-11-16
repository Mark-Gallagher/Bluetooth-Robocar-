
void forward()
{
    digitalWrite(LedA, LOW); //Red leds OFF
    digitalWrite(LedB, HIGH);//Green Leds ON
    digitalWrite(LedC,LOW); //Yellow leds OFF
    digitalWrite(EN1,HIGH);
    digitalWrite(EN2,HIGH);
    // Right Motor operation
    digitalWrite(IN1,HIGH);
    digitalWrite(IN2,LOW);
    // Left Motor operation
    digitalWrite(IN3,LOW);
    digitalWrite(IN4,HIGH);
    delay(1000);//wait 1 seconds
}
void backwards()
{ 
    digitalWrite(LedA, HIGH); //Red leds ON
    digitalWrite(LedB, LOW); //Green Leds OFF
    digitalWrite(LedC,LOW); // Yellow led OFF
    digitalWrite(EN1,HIGH);
    digitalWrite(EN2,HIGH);
    // Right Motor operation
    digitalWrite(IN1,LOW);
    digitalWrite(IN2,HIGH);
    // Left Motor operation
    digitalWrite(IN3,HIGH);
    digitalWrite(IN4,LOW);
    delay(1000);//wait 1 second
}
 void finish()
  {
    digitalWrite(LedA,LOW);   //Red leds OFF
    digitalWrite(LedB,LOW);   //Green leds OFF
    digitalWrite(LedC,HIGH);  //Yellow leds ON
    digitalWrite(EN1,LOW);
    digitalWrite(EN2,LOW);
    digitalWrite(IN1,LOW);
    digitalWrite(IN2,LOW);
    digitalWrite(IN3,LOW);
    digitalWrite(IN4,LOW);
    delay(1000);//wait 1 second
  }
  void left()
  {
    digitalWrite(LedA,LOW);   //Red leds OFF
    digitalWrite(LedB,LOW);   //Green leds OFF
    digitalWrite(LedC,LOW);  //yellow leds OFF
     // Right Motor operation
    digitalWrite(EN1,HIGH);
    digitalWrite(IN1,HIGH);
    digitalWrite(IN2,LOW);
    // Left Motor operation is turned off
    digitalWrite(EN2,LOW);
    digitalWrite(IN3,LOW);
    digitalWrite(IN4,LOW);
    delay(3000);//wait 1second
  }
  
  void right()
  {
    digitalWrite(LedA,LOW);   //Red leds OFF
    digitalWrite(LedB,LOW);   //Green leds OFF
    digitalWrite(LedC,LOW);  //Yellow leds OFF
    // Left Motor operation 
    digitalWrite(EN2,HIGH);
    digitalWrite(IN3,LOW);
    digitalWrite(IN4,HIGH);
    
    // Right Motor operation is turned off
    digitalWrite(EN1,LOW);
    digitalWrite(IN1,LOW);
    digitalWrite(IN2,LOW);
    delay(3000);//wait 1 second
  }
