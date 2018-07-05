    #include "LiquidCrystal.h"
float Temp = 0;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int Temp_pin = 0;
int ADClido = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin (9600);
  analogReference(INTERNAL);
  lcd.begin (16,2);
  lcd.setCursor (0,0);
  lcd.print("Temp =");
  lcd.setCursor(13,0);
  lcd.print("*C");
  
}

void loop() {
  // put your main code here, to run repeatedly:
  ADClido = analogRead(Temp_pin);
  Temp = ADClido * 0.1075268817204301;
  lcd.setCursor (7,0);
  lcd.print (Temp);
  Serial.print (Temp);
  Serial.println (" *C");
  delay (500);
}
