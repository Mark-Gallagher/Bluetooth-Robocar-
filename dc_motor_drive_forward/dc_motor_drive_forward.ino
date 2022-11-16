const int IN1 = 7;
const int IN2 = 8;
const int IN3 = 10;
const int IN4 = 9;
const int EN1 = 6;
const int EN2 = 11;
const int LedA = 4;  //Red leds
const int LedB = 5;  //Green leds
const int LedC = 3;  //Yellow leds 
void setup() {
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  pinMode(EN1,OUTPUT);
  pinMode(EN2,OUTPUT);
  pinMode(LedA,OUTPUT);  //Red leds declared as outputs
  pinMode(LedB,OUTPUT);  //Green leds declared as outputs
  pinMode(LedC,OUTPUT);  //Yellow leds declared as outputs
  Serial.begin(9600); 
}

void loop()
{
  // Right Motor operation
  analogWrite(EN1,255); //PWM is equal to 2^10-1 data bits /4 = 255
  analogWrite(EN2,255); //PWM is equal to 2^10-1 data bits /4 = 255
  //digitalWrite(EN1,HIGH);
  digitalWrite(LedA, LOW); 
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(LedB, HIGH); 
  digitalWrite(LedC,LOW); //Yellow led OFF
  // Left Motor operation
  //digitalWrite(EN2,HIGH);
  digitalWrite(LedA, LOW);  //Red leds OFF
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);   
  digitalWrite(LedB, HIGH); //Green leds ON
  digitalWrite(LedC,LOW); //Yellow led off
  delay(1000);//wait 1 seconds
}

    
