#include <LiquidCrystal.h>
LiquidCrystal lcd(7,9,10,11,12,13);

void setup() {
  lcd.begin(16,2);
  Serial.begin(9600);

}

void loop() {
  lcd.setCursor(0,0);
  if(Serial.available()>0){
    char input=Serial.read();
    Serial.println("Do you want to print \"Hi\"?");
    if(input=='y'){
      lcd.print("Hi");
      delay(3000);
    }
    delay(2000);
    lcd.setCursor(0,0);
    Serial.println("Do you want to print the date?");
    if(input=='y'){
      lcd.print("  15/06/2023");
      delay(3000);
    }
    lcd.setCursor(0,0);
    Serial.println("Do you want to print a greeting?");
    delay(2000);
    if(input=='y'){
      lcd.setCursor(0,1);
      lcd.print("Have a great day!");
      delay(3000);
    }
  }

}
