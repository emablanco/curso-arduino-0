int trig = 5;
int echo = 4;
int buzzer = 3;
int distancia;
int tiempo;

void setup() {
  Serial.begin(9600);
  pinMode(5,OUTPUT);
  pinMode(4,INPUT);
  pinMode(3,OUTPUT);

}
void loop() {
  digitalWrite(trig,HIGH);
  delay(1);
  digitalWrite(trig,LOW);
  tiempo = pulseIn(echo,HIGH);
  distancia = tiempo / 58.2;
  if(distancia < 50 and distancia > 0){
    Serial.println(distancia);
    tone(buzzer,200);
    delay(distancia * 10);
    noTone(buzzer);
  }
  
 }
