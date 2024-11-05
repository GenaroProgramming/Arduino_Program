int rojo = 11;
int verde = 10;
int azul = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode (rojo, OUTPUT);
  pinMode (verde, OUTPUT);
  pinMode (azul, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(rojo, 51);
digitalWrite (verde, 21);
digitalWrite(azul,12);



/*
digitalWrite (rojo, 0); 
digitalWrite (azul, 255); 
digitalWrite (verde, 0);
delay (2000);

digitalWrite (rojo, 0); 
digitalWrite (azul,0); 
digitalWrite (verde, 255);
delay (2000) ;
*/

}
