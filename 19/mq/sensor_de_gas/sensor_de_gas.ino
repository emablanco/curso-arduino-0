//Sensores MQ . Los valores que devuelve son del 0 al 1023. Ver cual es el nivel minomo
// para usar alarma

template <class EMA> inline Print &operator <<(Print &obj, EMA arg){
  obj.print(arg);
  return obj;
}

int valor;

void setup() {
  Serial.begin(9600); 
}

void loop() {
  valor = analogRead(A0);
  Serial << valor<<"\<n";

}
