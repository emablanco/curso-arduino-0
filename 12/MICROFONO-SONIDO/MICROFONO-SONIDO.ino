//LA SALIDA ANALOGICA ES UTIL PARA SABER EL VALOR DE LA CONFIGURACION
//CUANDO UN SONIDO SUPERA EL VALOR CONFIGURADO. MANDA UNA SEÑAL AL PING DIGITAL
// ENVIA UN HIGH

int microfono = 3;

int led = 4;

bool estado;

void setup() {

  pinMode(microfono, INPUT);

  pinMode(led,OUTPUT);
  
  Serial.begin(9600);
}

void loop() {

  //Ver el valor de la salida analogica, para saber el valor de configuracion
  //Se puede guardar el valor para saber como lo conifiguramos.-
 Serial.println(analogRead(0));
 
 if(digitalRead(microfono)){
 
  estado = digitalRead(led);
  
  digitalWrite(led, !estado);
  
  delay(1000);
 
 }

}
