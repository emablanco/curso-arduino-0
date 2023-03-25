void setup() {
  pinMode(5,OUTPUT);
  //lAS ENTRADAS ANALOGICAS NO HACE FALTA QUE SE DEFINAN
}

void loop() { 
  analogWrite(5,(analogRead(0) / 4));
}
