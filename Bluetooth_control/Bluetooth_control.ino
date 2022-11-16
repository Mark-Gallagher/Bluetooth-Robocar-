enum State
{
  'F';
  'L';
  'S';
  'R';
  'B';
}


void setup() {
  // initialize serial communication:
  Serial.begin(9600);
  // initialize the button pins:
  for (int thisbutton = 1; thisbutton < 5; thisbutton++) {
    pinMode(thisbutton, OUTPUT);
  }
}

void loop() {
 
    switch (State) {
      case 'F':
        digitalWrite(1, HIGH);
        forward();
        break;
      case 'L':
        digitalWrite(2, HIGH);
        left();
        break;
      case 'S':
        digitalWrite(3, HIGH);
        finish();
        break;
      case 'R':
        digitalWrite(4, HIGH);
        right();
        break;
      case 'B':
        digitalWrite(5, HIGH);
        backwards();
        break;
      default:
        // turn all the LEDs off:
        for (int thisbutton = 1; thisbutton < 5; thisbutton++) {
          digitalWrite(thisbutton, LOW);
        }
    }
  }
}
