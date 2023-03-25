template <class EMA> inline Print &operator <<(Print &obj, EMA arg){
  obj.print(arg);
  return obj;
}

//MELODIAS https://github.com/robsoncouto/arduino-songs
int button = 2;
int buzzer = 8;


void setup() {
  
  Serial.begin(9600);
  
  pinMode(button, INPUT);
  
  pinMode(buzzer, OUTPUT);
  
  
}

void loop() {

  if(digitalRead(button) == LOW){
    for(int i = 0; i < 5 ; ++i){

      tone(buzzer, 400);
      delay(500);
      noTone(buzzer);
      delay(500);
    }
  }
}
