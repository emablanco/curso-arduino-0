//memoria EEPROM arduino uno tiene 1024 bytes. desde el  al 1023.
//permitiendo guardar un obteto en binarion. que es lo mismo de 0 a 255
// 8 bit por celda
// 1024 celda y en cada una se puede guardar 8bits
// tiene un limite de escritura la memoria. 100.000 cada celda

template <class EMA> inline Print &operator << (Print &obj, EMA arg){

  obj.print(arg);
  
  return obj;
}

#include <EEPROM.h>

void setup() {
  
  Serial.begin(9600);
  
  Serial << "Capacidad de memoria "<< EEPROM.length() << "\nValor almacenado en dirreccion 0: "<<EEPROM.read(0)<<"\nAlmacenando numero 39 en direccion 0";
  
  //una vez que se reemplazo el valor apagar y prender el arduino para ver el valor guardado con la linea siguiente
  
  //Serial << "Capacidad de memoria "<< EEPROM.length() << "\nValor almacenado en dirreccion 0: "<<EEPROM.read(0);
  
  EEPROM.write(0,39);  
}

void loop() {

  
 
}
