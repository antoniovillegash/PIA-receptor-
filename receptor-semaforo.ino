#include <VirtualWire.h>
const int dataPin=9;
const int alerta=13;
void setup(){
  vw_setup(2000);   
  vw_set_rx_pin(dataPin);
  vw_rx_start();
  pinMode(alerta, OUTPUT);
  digitalWrite(alerta, false);}
  uint8_t data[0];
  uint8_t dataLength=1;
void loop(){
  data[0] = '0';
  vw_get_message(&data[0],&dataLength);
    switch(data[0]){
    case '1':
      digitalWrite(alerta,true);
      delay(200);
      digitalWrite(alerta,false);
      delay(1500);
      break;
    case'2':
      digitalWrite(alerta,true);
      delay(100);
      digitalWrite(alerta,false);
      delay(800);
      break;
    case '3':
      digitalWrite(alerta,false);
      delay(100);
      break;
      default:
      break;}}
