const int IN1 = 7;
const int IN2 = 8;
const int IN3 = 10;
const int IN4 = 9;
const int EN1 = 6;
const int EN2 = 11;

void setup() {
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  pinMode(EN1,OUTPUT);
  pinMode(EN2,OUTPUT);
}

void loop()
{
  // Right Motor operation
  digitalWrite(EN1,HIGH);
  digitalWrite(EN2,HIGH);
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  // Left Motor operation
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
  delay(100);//wait 1second
}
