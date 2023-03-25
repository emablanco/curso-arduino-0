template <class EMA> inline Print &operator <<(Print &obj, EMA arg){
  obj.print(arg);
  return obj;
}


// el sensor devuelve low si esta en la linea, sino esta en la linea devueve hifh
int sensor = 2;
int valor;
bool anterior = false;

void setup() {
  pinMode(sensor, INPUT);
  Serial.begin(9600);
}

void loop() {

  valor = digitalRead(sensor);

  if(anterior != valor){
    if(valor == HIGH){
      Serial << "Fuera de linea\n";
      anterior = valor;
     }
     else{
      Serial << "Se encuentra en la linea\n";
      anterior = valor;
     }
   }
   delay(500);
}
