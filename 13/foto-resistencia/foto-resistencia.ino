int led = 5;

void setup() {

  pinMode(led,OUTPUT);

}

void loop() { 

 /*
  
  if(analogRead(0)< 200){
     digitalWrite(led,HIGH);
     delay(1000);
  }
  else{
    digitalWrite(led,LOW);
  }
  */
  //luz baja , el led aumenta;
 
  analogWrite(led,map(analogRead(0), 0 , 1023, 255,0));
}
