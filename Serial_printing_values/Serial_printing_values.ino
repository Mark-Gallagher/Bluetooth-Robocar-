
void forward();   //function call
void backwards();  //function call
void finish();    //function call
void left();       //function call
void right();      //function call

const int IN1 = 7;
const int IN2 = 8;
const int IN3 = 10;
const int IN4 = 9;
const int EN1 = 6;
const int EN2 = 11;
const int LedA = 4;  // Red leds
const int LedB = 5;  //Green leds.
const int LedC = 3; //yellow leds 


char val; //variable used to find a character pressed

void setup() {
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  pinMode(EN1,OUTPUT);
  pinMode(EN2,OUTPUT);  
  pinMode(LedA,OUTPUT);  
  pinMode(LedB,OUTPUT);  
  pinMode(LedC,OUTPUT);  
  Serial.begin(9600); //Serial baud rate communication of data
}
 
void loop() {
  if(Serial.available()) 
  {
     val = Serial.read();
  
      if(val == 'f')
          {
            forward();
            Serial.print(val);
            Serial.print("\n");
          }
          if(val == 'l')
          {
            left();
            Serial.print(val);
            Serial.print("\n");
          }
          if(val == 's')
          {
            finish();
            Serial.print(val);
            Serial.print("\n");
          }
          if(val == 'r')
          {
            right();
            Serial.print(val);
            Serial.print("\n");
          }
          if(val == 'b')
          {
            backwards();
            Serial.print(val);
            Serial.print("\n");
          }
  
  
       }
    }

 

  
