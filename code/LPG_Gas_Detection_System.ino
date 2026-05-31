#include <LiquidCrystal_I2C.h>
#include <Servo.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

#define sw A0
#define buzzer 8

int sense;
String status = "CHECKING";

Servo servo;

void setup()
{
  Serial.begin(9600);

  pinMode(sw, INPUT);
  pinMode(buzzer, OUTPUT);

  digitalWrite(buzzer, LOW);

  pinMode(13, OUTPUT);
  digitalWrite(13, LOW);

  lcd.init();
  lcd.backlight();

  lcd.print(" GAS DETECTION ");
  lcd.setCursor(0, 1);
  lcd.print("AND ALERT SYSTEM");

  delay(2000);

  servo.attach(9);

  delay(1000);

  servo.write(90);

  delay(1000);

  lcd.clear();
  lcd.print("*** READY ***");

  delay(2000);
}

void beep()
{
  digitalWrite(buzzer, HIGH);
  delay(300);

  digitalWrite(buzzer, LOW);
  delay(200);

  digitalWrite(buzzer, HIGH);
  delay(300);

  digitalWrite(buzzer, LOW);
  delay(200);
}

void servo_close()
{
  servo.write(180);
  delay(1000);
}

void servo_open()
{
  servo.write(90);
  delay(1000);
}

void loop()
{
  sense = analogRead(sw);

  sense = map(sense, 0, 1023, 0, 100);

  if (sense >= 20)
  {
    lcd.clear();
    lcd.print(" ** ALERT ** ");

    lcd.setCursor(0, 1);
    lcd.print(" GAS DETECTED ");

    status = "ALERT";

    beep();

    servo_close();

    beep();
    beep();
    beep();
  }
  else
  {
    status = "NORMAL";

    digitalWrite(buzzer, LOW);

    servo_open();
  }

  lcd.clear();

  lcd.print("GAS LEVEL : ");
  lcd.print(sense);
  lcd.print("%");

  lcd.setCursor(0, 1);

  lcd.print("STATUS : ");
  lcd.print(status);

  digitalWrite(13, HIGH);
  delay(300);

  digitalWrite(13, LOW);
  delay(200);
}
