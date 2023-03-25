//ky-040--

int a = 2; //dt
int b = 4; // clk

int anterior = 50;
int posicion = 50;

void setup() {
  pinMode(2, INPUT);
  pinMode(4,INPUT);
  Serial.begin(9600);

  attachInterrupt(digitalPinToInterrupt(a), encoder, LOW);

  Serial.println("Listo");
}
void loop() {

  if(posicion != anterior){
    Serial.println(posicion);
    anterior = posicion;
  }
}

void encoder(){

  static unsigned long ultimaInterrupcion = 0;
  
  unsigned long tiempoInterrupcion = millis();

  if(tiempoInterrupcion - ultimaInterrupcion > 5){
    
  
    if(digitalRead(b) == HIGH){
  
      posicion ++;
    }
  
    else {
  
      posicion --;
      
    }

    posicion = min(100, max(0,posicion)); 
      
    ultimaInterrupcion = tiempoInterrupcion;
  
  }
}
