//senseor k-17
//sensor k-27 es lo mismo. solo tiene un led

int led = 3;
int s_orientacion = 2;

void setup() {
  pinMode(led,OUTPUT);
  pinMode(s_orientacion,INPUT);
}

void loop() {
  if(digitalRead(s_orientacion)){
    digitalWrite(led,HIGH);
    delay(1000);
  }
  else{
    digitalWrite(led,LOW);
  }
}
