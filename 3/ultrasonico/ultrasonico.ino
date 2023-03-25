int trig = 5;
int echo = 4;
int led = 3;
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
  delay(10);
  digitalWrite(trig,LOW);
  tiempo = pulseIn(echo,HIGH);
  distancia = tiempo / 58.2;
  Serial.println(distancia);
  if(distancia < 20){
    digitalWrite(led,HIGH);
    delay(distancia * 10);
    digitalWrite(led,LOW);
  }
  
 }
