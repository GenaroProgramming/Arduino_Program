int activador = A5;
int ledVerde = 8;
int ledAmarillo = 9;
int ledRojo = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarillo, OUTPUT);
  pinMode(ledRojo, OUTPUT);
  pinMode(activador, INPUT);
  Serial.begin(9600);
} 

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue = analogRead(activador);

  Serial.println(sensorValue);
  delay(500);

  if(sensorValue > 450 && sensorValue < 500){
    digitalWrite(ledVerde, HIGH);
    delay(1000);
    digitalWrite(ledVerde, LOW);
  }

  if(sensorValue > 551 && sensorValue < 650){
    digitalWrite(ledAmarillo, HIGH);
    delay(1000);
    digitalWrite(ledAmarillo, LOW);
  }

  if(sensorValue > 651 && sensorValue < 700){
    digitalWrite(ledRojo, HIGH);
    delay(1000);
    digitalWrite(ledRojo, LOW);
  }
}