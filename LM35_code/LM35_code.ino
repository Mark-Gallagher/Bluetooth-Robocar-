const int(TEMP_PIN) = A0;
const int Vcc_mv = 5000;
const int POW_2_10=1024;
 float Val;
  float Val_mv;
  float Val_c;
  float Val_f;
  float getTemperature();
void setup()
{
 

  pinMode(TEMP_PIN,INPUT);
  Val = analogRead(TEMP_PIN);
  Val = analogRead(A0);
  Serial.print(Val);
}
void loop()
{
    Val_mv = (Val/1024)*5000;
  
    Val_c = Val_mv/10;
  
    Val_f = ((Val_c*9)/5)*32;

  
    float tempCelsius = getTemperature();
    Serial.print("Temperature: ");
    Serial.println(tempCelsius);
    delay(1000);
    return Val_c;
}
