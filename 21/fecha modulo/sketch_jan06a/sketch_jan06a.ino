//conexiones con modulo i2c
// Instalar la libreria Adafruit_BusIO para que funcione el modulo

template <class EMA> inline Print &operator <<(Print &obj , EMA arg){
  obj.print(arg);
  return obj;
}

#include <Wire.h>

#include <RTClib.h>

bool alarma = false;
int rele = 6;

RTC_DS3231 rtc;

void setup(){
  
  Serial.begin(9600);
  pinMode(rele, OUTPUT);
  if(! rtc.begin()){

    Serial.println("Modulo RTC no encontrado");
    
    while(true);
  }
  
  //el compilador le da la fecha.
  rtc.adjust(DateTime(__DATE__, __TIME__));

}
void loop(){

  //obtener fecha y hora cada segundo
  DateTime fecha = rtc.now();
  
  Serial << fecha.day() <<"/"<<fecha.month() << "/" << fecha.year() << "/ "<< fecha.hour() << ":"<< fecha.minute() << ":" << fecha.second()<<"\n";

  if(fecha.hour() == 20 and fecha.minute() == 9){
    
      if(alarma == false){

          digitalWrite(rele, HIGH);

          alarma = !alarma;
          
      }
   }

   if(fecha.hour() == 20 and fecha.minute() == 10){
      
      digitalWrite(rele, LOW);
      
      alarma = !alarma;
   }
    
  //espera un segundo

  delay(1000);
}
