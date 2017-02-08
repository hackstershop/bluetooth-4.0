#include <SoftwareSerial.h>

SoftwareSerial BTSerial(7, 8); // connect 7 to TX,  8 to RX
int data;
void setup() {
  pinMode(13, OUTPUT);
 Serial.begin(9600);
 BTSerial.begin(9600);
 BTSerial.write("AT+HELP\r\n"); // show all bluetooth commands
 
 
}
void loop(){
// read from to chip to serial, write to serial 
  if (BTSerial.available()){
    Serial.write(BTSerial.read());
}

// turn on/off led with smartphone app MangoCube BLE

  /*if (BTSerial.available() > 0){
    data = BTSerial.read();
    if(data == 'H'){
        digitalWrite(13, HIGH);
      } else if(data == 'L'){
          digitalWrite(13, LOW);
        }
    }*/
    
}

