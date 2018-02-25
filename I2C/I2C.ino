// https://raw.githubusercontent.com/fdebrabander/Arduino-LiquidCrystal-I2C-library/master/examples/HelloWorld/HelloWorld.ino

#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

// Set the LCD address to 0x27 for a 16 chars and 2 line display
// if not work, modify 0x27 => 0x3F
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
  // initialize the LCD
  lcd.begin();

  // Turn on the blacklight and print a message.
  lcd.backlight();
  lcd.print("hello");
  lcd.setCursor(0, 1);
  lcd.print("world");
}

void loop()
{
  // Do nothing here...
}
