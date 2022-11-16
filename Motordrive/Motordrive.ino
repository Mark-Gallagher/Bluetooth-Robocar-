const int IN1 = 7;
const int IN2 = 8;
const int IN3 = 10;
const int IN4 = 9;
const int EN1 = 6;   //Enable pin1 is configured to pin6 of the arduino
const int EN2 = 11;  //Enable pin2 is  configured to pin11 of the arduino
const int LedA = 4;  //Red leds
const int LedB = 5;  //Green leds.
const int LedC = 3;  //Yellow leds 

void forward();    //function call
void backwards();  //function call
void finish();     //function call
void left();       //function call
void right();      //function call

const int sensor=A0; //lm35 is connected to Analog pin A0
float tempc;  //variable to store temperature in degree celsius
float vout;   //variable to store output voltage

enum State
{
  Forwards,
  Left,
  Stop,
  Right,
  Backwards
};

State currentState,nextState;

 
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
  pinMode(sensor,INPUT); //LM35 declared as an output
  Serial.begin(9600);

    {
      forward();
      backwards();
      left();
      backwards();
      right();
      finish();
    }
    currentState = Stop; //currentstate of motors is LOW
}
void loop()
{
  vout=analogRead(sensor);//the output voltage is analog reading the sensor
  vout=(vout*500)/1023;// output voltage = output voltage*500mv/2^10-1 data bits
  tempc=vout; // Storing value in Degree Celsius
  Serial.print("degree = ");//prints the dergrees lcd screen
  Serial.print(tempc);//prints tempc value
  Serial.println();
  delay(1000);// 1 second pause

  switch (currentState) {
      case Forwards:
        nextState = Left;
        forward();  //Function call
        break;
      case Left:
        nextState = Stop;
        left();     //Function call
        break;
      case Stop:
        nextState = Right;
        finish();   //Function call
        break;
      case Right:
        nextState = Backwards;
        right();    //Function call
        break;
      case Backwards:
        backwards(); //Function call
        break;
      default:
        nextState = Stop;
    }
    
  currentState = nextState;

}
void forward()
{
  // Right Motor operation
  digitalWrite(LedA,LOW);  //Red leds OFF
  digitalWrite(EN1,HIGH);   //Enable pin turns ON
  digitalWrite(EN2,HIGH);   //Enable pin turns ON
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(LedC,LOW);  //Yellow leds OFF
  // Left Motor operation
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);
  digitalWrite(LedA,LOW);  //Red leds OFF
  digitalWrite(LedB,HIGH); //Green leds ON
  digitalWrite(LedC,LOW);  //Yellow leds OFF
  delay(3000);//wait 3 seconds
}
void backwards()
{
   // Right Motor operation
  digitalWrite(LedB,LOW);//Green leds OFF
  digitalWrite(EN1,HIGH);   //Enable pin turns ON
  digitalWrite(EN2,HIGH);   //Enable pin turns ON
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  // Left Motor operation
  digitalWrite(LedB,LOW); //Green leds OFF
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
  digitalWrite(LedA,HIGH); //Red leds ON
  digitalWrite(LedC,LOW);  //Yellow leds OFF
  delay(3000);//wait 3 seconds
}
void finish()
  {
    digitalWrite(EN1,LOW); //Enable pin turns OFF
    digitalWrite(EN2,LOW); //Enable pin turns OFF
    digitalWrite(IN1,LOW); 
    digitalWrite(IN2,LOW);
    digitalWrite(IN3,LOW);
    digitalWrite(IN4,LOW);
    digitalWrite(LedA,LOW);   //Red Leds OFF
    digitalWrite(LedB,LOW);   //Green leds OFF
    digitalWrite(LedC,HIGH);  //Yellow leds ON
    delay(1000);//wait 1 second
  }
  void left()
  {
    digitalWrite(LedA,LOW); //Red Leds OFF
    digitalWrite(LedB,LOW); //Green leds OFF
    digitalWrite(LedC,LOW); //Yellow led OFF
    // Right Motor operation
    digitalWrite(EN1,HIGH);
    digitalWrite(IN1,HIGH);
    digitalWrite(IN2,LOW);
    // Left Motor operation is turned OFF
    digitalWrite(EN2,LOW);
    digitalWrite(IN3,LOW);
    digitalWrite(IN4,LOW);
    delay(2000);//wait 2 seconds
  }
  
  void right()
  {
    digitalWrite(LedA,LOW); //Red Leds OFF
    digitalWrite(LedB,LOW); //Green leds OFF
    digitalWrite(LedC,LOW); //Yellow led OFF
    // Left Motor operation 
    digitalWrite(EN2,HIGH);
    digitalWrite(IN3,LOW);
    digitalWrite(IN4,HIGH);
    // Right Motor operation is turned OFF
    digitalWrite(EN1,LOW);
    digitalWrite(IN1,LOW);
    digitalWrite(IN2,LOW);
    delay(2000);//wait 2 seconds
  }
