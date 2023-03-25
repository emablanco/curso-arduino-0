template <class EMA> inline Print &operator <<(Print &obj, EMA arg){
  obj.print(arg);
  return obj;
}

#include <SoftwareSerial.h>
SoftwareSerial miBT(3,2);
int led1 = 10;
int led2 = 11;
char dato;
void setup() {
  Serial.begin(9600);
  miBT.begin(9600);
  pinMode(led2,OUTPUT);
  pinMode(led1,OUTPUT); 
}

void loop() {
  if(miBT.available()){
    
    dato = miBT.read();
    Serial <<"Comando recibido " << dato<<"\n";
    
    if(dato == '1'){
      digitalWrite(led1,!digitalRead(led1));
      miBT.write("Led 1");
    }
    if(dato == '2'){
    
      digitalWrite(led2,!digitalRead(led2));
      miBT.write("led2");
    }
  }
}
