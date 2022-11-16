const int LedA = 5;
const int LedB = 4;
const int LedC = 3;

void setup() {
  // put your setup code here, to run once:
pinMode(LedA, OUTPUT);  
pinMode(LedB, OUTPUT);  
pinMode(LedC, OUTPUT);  

}

void loop() {
  // put your main code here, to run repeatedly:
 
digitalWrite(LedA,HIGH); 
delay(500);
digitalWrite(LedA,LOW); 
delay(500);

digitalWrite(LedB,HIGH); 
delay(500);
digitalWrite(LedB,LOW); 
delay(500);

digitalWrite(LedC,HIGH);
delay(500);
digitalWrite(LedC,LOW);
delay(500);
}
