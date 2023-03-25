/*
int red = 8;
int blue = 9;
int green = 10;
*/
int r = 5;
int b = 6;
int g = 9;


void setup() {
// for(int i = 8; i <= 10; i++){
//  pinMode(i, OUTPUT);
 //}
pinMode(r, OUTPUT);pinMode(b, OUTPUT);pinMode(g, OUTPUT);

}

void loop() {
  /*digitalWrite(red,HIGH);
  delay(1000);
  digitalWrite(red,LOW);
  digitalWrite(blue,HIGH);
  delay(1000);
  digitalWrite(blue,LOW);
  digitalWrite(green,HIGH);
  delay(1000);
  digitalWrite(green,LOW);
  */
  miColor(100,200,255);
  delay(1000)
  miColor(0,0,0);
  delay(1000);
}

void micolor(int color_r, int color_b, int color_g){
 //Creamos un color, convinando los tres colores
    digitalWrite(g,color_g);
    digitalWrite(r,color_r);
    digitalWrite(b,color_b);
  
}
