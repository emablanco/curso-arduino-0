//Sensor ky-010 infra rojo, para probar las interrupciones

volatile int cantidad = 0;
int anterior = 0;

void contar(); 
void setup() {
  
  Serial.begin(9600);

  //cuando se encuentre una interrupcion se ejecutara la funcion contar
  attachInterrupt(digitalPinToInterrupt(2) ,contar ,RISING);
  
}

void loop() {

  if(anterior != cantidad){
    Serial.println(cantidad);
    anterior = cantidad;
  }
}
void contar(){
  cantidad ++;
}
