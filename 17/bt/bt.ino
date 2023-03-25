//Para poder usar el bt con cualquier pin digital
#include <SoftwareSerial.h>

//leds
int led1 = 10;
int led2 = 11;
char dato;
//objeto 
SoftwareSerial miBT(3,2);

void setup() {
  Serial.begin(9600);
  miBT.begin(9600);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
}

void loop() {

 //si hay mensaje dentro del objeto 
  if(miBT.available()){
     dato = miBT.read();
  //comunico al puerto serial que tenemos un mensaje
    Serial.println("Comando recibido");
    Serial.println(dato);
   
//comparo el comando que se recibio 
    if(dato == 'a'){
      Serial.println(miBT.read());
      //escribo en el puerto digital
      digitalWrite(led1, !digitalRead(led1));
      Serial.println("Led 1 encendido");
   }
   
   if(dato == 'b'){
      digitalWrite(led2, !digitalRead(led2));
      Serial.println("Led 2 encendido");
    }
  }
}
