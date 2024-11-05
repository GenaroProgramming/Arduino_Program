v//Declaracion de variables
int ledGreen = 13;
int ledYellow = 12;
int ledRed = 8;
int delay = 5000;

void setup() {
  //Diciendo que pines analgos se van a ocupar
  pinMode(ledGreen, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(ledRed, OUTPUT);
}

void loop() {
  digitalWrite(ledGreen, HIHG);
  digitalWrite(delay);
  digitalWrite(ledGreen, LOW);

  digitalWrite(ledYellow, HIGH);
  digitalWrite(delay);
}
