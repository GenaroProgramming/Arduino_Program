#include <LiquidCrystal.h>
// sensor ultrasonico, lcd y leds
LiquidCrystal lcd (7, 6, 5, 4, 3, 2);

int trig = 10;
int eco = 9;
int led6 = 13;
int led5 = 12;
int led4 = 11;
int led3 = A1;
int led2 = A2;
int led1 = A3;
int duracion;
int distancia;



void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
  pinMode(trig, OUTPUT);
  pinMode(eco, INPUT);
  pinMode(led6, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led1, OUTPUT);
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

  if (distancia <= 5){
    digitalWrite(led1, HIGH);
    delay(200);
    
  }else {
    digitalWrite(led1, LOW);
    delay(100);
  }

  if (distancia <= 15){
    digitalWrite(led2, HIGH);
    delay(200);
    
  }else {
    digitalWrite(led2, LOW);
    delay(100);
  }

  if (distancia <= 25){
    digitalWrite(led3, HIGH);
    delay(200);
    
  }else {
    digitalWrite(led3, LOW);
    delay(100);
  }

  if (distancia <= 35){
    digitalWrite(led4, HIGH);
    delay(200);
    
  }else {
    digitalWrite(led4, LOW);
    delay(100);
  }

  if (distancia <= 45){
    digitalWrite(led5, HIGH);
    delay(200);
    
  }else {
    digitalWrite(led5, LOW);
    delay(100);
  }

  if (distancia <= 50){
    digitalWrite(led6, HIGH);
    delay(200);
    
  }else {
    digitalWrite(led6, LOW);
    delay(100);
  }

  
/*
  if (distancia <= 20){
    digitalWrite(led, HIGH);
    delay(200);
    

  } else{
    digitalWrite(led, LOW);
    delay(200);
  }
  */
}
