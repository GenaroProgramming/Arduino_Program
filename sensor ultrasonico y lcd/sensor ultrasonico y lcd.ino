#include <LiquidCrystal.h>
// sensor ultrasonico y lcd
LiquidCrystal lcd (7, 6, 5, 4, 3, 2);

int trig = 10;
int eco = 9;
int led = 13;
int duracion;
int distancia;



void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
  pinMode(trig, OUTPUT);
  pinMode(eco, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(2, 0);
  digitalWrite(trig, HIGH);
  delay(200);
  digitalWrite(trig, LOW);
  duracion = pulseIn(eco, HIGH);
  distancia = duracion / 58.2;
  Serial.print(distancia);
  Serial.print(" Centimetros");
  Serial.println();
  lcd.print("El objeto esta en: ");
  lcd.scrollDisplayLeft();
  lcd.print(distancia);
  lcd.scrollDisplayLeft();
  lcd.print("cm");
  lcd.scrollDisplayLeft();


  delay(200); 

  

  if (distancia <= 20){
    digitalWrite(led, HIGH);
    delay(200);
    

  } else{
    digitalWrite(led, LOW);
    delay(200);
  }
}
