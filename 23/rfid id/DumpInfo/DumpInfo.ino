//Programa adaptado por Super AgroFighter para el canal
//de youtube de Agricultura Electrónica

// 
//https://youtu.be/EzE-P_S_zew 
//Suscribirse, que no cuesta naaaaaa!!!!  :D
//Muchas gracias majos!!!!

/* Typical pin layout used:
 * -----------------------------------------------------------------------------------------
 *             MFRC522      Arduino       Arduino   Arduino    Arduino          Arduino
 *             Reader/PCD   Uno/101       Mega      Nano v3    Leonardo/Micro   Pro Micro
 * Signal      Pin          Pin           Pin       Pin        Pin              Pin
 * -----------------------------------------------------------------------------------------
 * RST/Reset   RST          9             5         D9         RESET/ICSP-5     RST
 * SPI SS      SDA(SS)      10            53        D10        10               10
 * SPI MOSI    MOSI         11 / ICSP-4   51        D11        ICSP-4           16
 * SPI MISO    MISO         12 / ICSP-1   50        D12        ICSP-1           14
 * SPI SCK     SCK          13 / ICSP-3   52        D13        ICSP-3           15
 */

#include <SPI.h> //Librería para comunicar por el bus SPI
#include <MFRC522.h>

#define RST_PIN 9    //Pin 9 para el reset del RC522
#define SS_PIN  10   //Pin 10 para el SLAVE SELECT (SDA) del RC522
MFRC522 mfrc522(SS_PIN, RST_PIN); //Creamos el objeto para el RC522 y mandamos las constantes creadas antes


void setup() {
  Serial.begin(9600); //Iniciamos el puerto serie
  SPI.begin();        //Iniciamos el Bus SPI
  mfrc522.PCD_Init(); // Iniciamos  el MFRC522. PCD es el módulo lector(proximity coupling devide)
  Serial.println("Pase tarjeta o llavero:");
}

void loop() {
  
  // Revisamos si hay nuevas tarjetas  presentes
  if ( mfrc522.PICC_IsNewCardPresent())//PICC es la tarjeta o llavero (Proximity integrated circuit chip) 
        {  
      //Seleccionamos una tarjeta
            if ( mfrc522.PICC_ReadCardSerial()) 
            {
                  //Enviamos serialemente su UID (Unique Identification)
                  //UID es en hexadecimal y es unico para cada tarjeta
                  Serial.print("UID (Unique Identifier) de la tarjeta:");
                  //Para que nos saque el UID de dos en dos digitos
                  for (byte i = 0; i < mfrc522.uid.size; i++) {//para que nos saque solo el valor UID
                          Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
                          //Así nos muestra bien de 2 en 2 valores el UID en hexadecimal
                          Serial.print(mfrc522.uid.uidByte[i], HEX); //Imprimimos el valor del UID  
                  } 
                  Serial.println();
                  // Terminamos la lectura de la tarjeta  actual
                  mfrc522.PICC_HaltA();//Así le decimos a la tarjeta que no necesitamos mas info
                  //así el lector para y no consume, mandando la señal         
            }      
  } 
}
