#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

// --- Frames baris 1 (atas) ---
byte s1[8] = {B01110,B01110,B00101,B11111,B10100,B00100,B01010,B10001};
byte s2[8] = {B01110,B01110,B10100,B11111,B00101,B00100,B01010,B10001};

// --- Frames baris 2 (bawah) ---
byte s3[8] = {B01110,B01110,B10101,B01110,B00100,B00100,B01010,B10001};
byte s4[8] = {B01110,B01110,B00101,B01110,B01100,B00100,B01010,B10001};
byte s5[8] = {B01110,B01110,B00101,B00110,B01100,B10100,B01010,B10001};
byte s6[8] = {B01110,B01110,B10100,B01110,B00110,B00100,B01010,B10001};

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.clear();
  lcd.createChar(0, s1);
  lcd.createChar(1, s2);
  lcd.createChar(2, s3);
  lcd.createChar(3, s4);
  lcd.createChar(4, s5);
  lcd.createChar(5, s6);
  
  lcd.setCursor(0,0); lcd.print("Dancin Stickman");
  delay(800);
  lcd.clear();
}

void loop() {
  for (int c = 0; c < 16; c++) {
    lcd.setCursor(c, 0); lcd.write((c % 2) ? 1 : 0);
    if (c > 0) { lcd.setCursor(c-1, 0); lcd.print(' '); }

    uint8_t f = 2 + (c % 4);
    lcd.setCursor(c, 1); lcd.write(f);
    if (c > 0) { lcd.setCursor(c-1, 1); lcd.print(' '); }

    delay(450);
  }

  lcd.setCursor(15,0); lcd.print(' ');
  lcd.setCursor(15,1); lcd.print(' ');

  for (int c = 14; c >= 0; c--) {
    lcd.setCursor(c, 0); lcd.write((c % 2) ? 1 : 0);
    lcd.setCursor(c+1, 0); lcd.print(' ');

    uint8_t f = 2 + (c % 4);
    lcd.setCursor(c, 1); lcd.write(f);
    lcd.setCursor(c+1, 1); lcd.print(' ');

    delay(450);
  }
}
