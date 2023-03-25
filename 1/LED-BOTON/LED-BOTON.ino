bool ESTADO;

int led = 5;
int boton = 4;

void setup() {
  pinMode(led,OUTPUT);
  pinMode(boton,INPUT);
}

void loop() {


  while(digitalRead(boton) == LOW){
    
  }
  digitalWrite(led, !digitalRead(led));
  
  while(digitalRead(boton) == HIGH){
    
 }
}
