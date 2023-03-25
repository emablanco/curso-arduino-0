// Sensor ky-002

// sensor cuandodetecta movimiento vaja el nivel.
int led = 3;
int sensor = 2;
bool estado = false;

void setup() {
  pinMode(led,OUTPUT);
  pinMode(sensor,INPUT);
}

void loop() {
  estado = digitalRead(sensor);
  digitalWrite(led,!estado);
/*  if(! digitalRead(sensor)){
    digitalWrite(led,HIGH);
    delay(250);
  }
  else{
    digitalWrite(led,LOW);
  }
  */
}
