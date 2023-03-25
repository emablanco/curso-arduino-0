 //memoria EEPROM arduino uno tiene 1024 bytes. desde el  al 1023.
//permitiendo guardar un obteto en binarion. que es lo mismo de 0 a 255
// 8 bit por celda
// 1024 celda y en cada una se puede guardar 8bits
// tiene un limite de escritura la memoria. 100.000 cada celda

template <class EMA> inline Print &operator << (Print &obj, EMA arg){

  obj.print(arg);
  
  return obj;
}

//put que calcule el tamaño de la variable y lo comience a guardar desde la posicion x
//get le decimos que queremos lo que se encuentra guardado desde la pocicion x y que tiene siert tamaño



float temperatura = 28.5;
char text[] = "Hola Ema como estas?";

#include <EEPROM.h>

void setup() {
  
  Serial.begin(9600);

  EEPROM.put(0, temperatura);
  
  EEPROM.put(10, text);

  Serial << "Valor de temperatura en direccion 0: "<< EEPROM.get(0,temperatura)<<"\n";

  Serial << "Valor de la cadena en direccion 10: "<< EEPROM.get(10,text)<<"\n";

  
}

void loop() {

  
 
}
