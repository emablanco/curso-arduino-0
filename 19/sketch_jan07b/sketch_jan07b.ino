template <class EMA> inline Print &operator << (Print &obj, EMA arg){
  obj.print(arg);
  return obj;
}

void setup() {
  Serial.begin(9600);
  Serial << "Inicio del programa";
}

void loop() {
  if(analogRead(A0) > 300){
    Serial <<"Corre gil: "<<analogRead(A0)<<"\n";
    delay(1000);
  }
}
