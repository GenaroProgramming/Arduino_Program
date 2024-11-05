//Declaracion de variables
int rojo = 13;
int amarillo = 9;
int verde = 11;

int uno = 2;
int dos = 3;
int tres = 4;
int cuatro = 5;
int cinco = 6;
int seis= 7;


void setup() {
  //Diciendo que pines analgos se van a ocupar
  pinMode(uno, OUTPUT);
  pinMode(dos, OUTPUT);
  pinMode(tres, OUTPUT);
  pinMode(cuatro, OUTPUT);
  pinMode(cinco, OUTPUT);
  pinMode(seis, OUTPUT);

}

void loop() {
  //semaforo
  /*
  digitalWrite(verde, HIGH);
  delay(4000);
  digitalWrite(verde, LOW);

  digitalWrite(amarillo, HIGH);
  delay(3000);
  digitalWrite(amarillo,LOW);
  delay(500);
  digitalWrite(amarillo,HIGH);
  delay(500);
  digitalWrite(amarillo,LOW);
  delay(500);
  digitalWrite(amarillo,HIGH);
  delay(500);
  digitalWrite(amarillo,LOW);

  digitalWrite(rojo,HIGH);
  delay(6000);
  digitalWrite(rojo,LOW);
  */

  //=====>
  //<=====
  digitalWrite(uno,HIGH);
  delay(200);
  digitalWrite(uno,LOW);
  delay(200);
  digitalWrite(dos,HIGH);
  delay(200);
  digitalWrite(dos,LOW);
  delay(200);
  digitalWrite(tres,HIGH);
  delay(200);
  digitalWrite(tres,LOW);
  delay(200);
  digitalWrite(cuatro,HIGH);
  delay(200);
  digitalWrite(cuatro,LOW);
  delay(200);
  digitalWrite(cinco,HIGH);
  delay(200);
  digitalWrite(cinco,LOW);
  delay(200);
  digitalWrite(seis,HIGH);
  delay(200);
  digitalWrite(seis,LOW);
  delay(200);

  digitalWrite(seis,HIGH);
  delay(200);
  digitalWrite(seis,LOW);
  delay(200);
  digitalWrite(cinco,HIGH);
  delay(200);
  digitalWrite(cinco,LOW);
  delay(200);
  digitalWrite(cuatro,HIGH);
  delay(200);
  digitalWrite(cuatro,LOW);
  delay(200);
  digitalWrite(tres,HIGH);
  delay(200);
  digitalWrite(tres,LOW);
  delay(200);
  digitalWrite(dos,HIGH);
  delay(200);
  digitalWrite(dos,LOW);
  delay(200);
  digitalWrite(uno,HIGH);
  delay(200);
  digitalWrite(uno,LOW);
  delay(200);
  

}