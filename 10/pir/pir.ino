template <class EMA> inline Print & operator<<(Print &obj, EMA arg){
  obj.print(arg);
  return obj;
}
int pir = 10;
int rele = 9;
void setup() {
  pinMode(pir, INPUT);
  pinMode(rele,OUTPUT);
}

void loop() {
  if(digitalRead(pir)){
    digitalWrite(rele,HIGH);
    delay(20000);
    digitalWrite(rele,LOW);
    delay(3000);
  }
}
//Negativo, al negativo del Led
//Positivo, al comun del rele
//Normal Abierto, al positivo del led;
