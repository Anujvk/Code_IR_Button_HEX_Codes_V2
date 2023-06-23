 /**********************************************************************************
 *  TITLE: Get the Hex code from any IR remote.
 *  Click on the following links to learn more. 
 *  YouTube Channel: https://youtube.com/@avelectrotech9853
 *  Download the Libraries:
 *  IRremote Library (3.6.1): https://github.com/Arduino-IRremote/Arduino-IRremote
 **********************************************************************************/

#include <IRremote.h>
 
int IR_RECV_PIN = 9;  //(SD2) Update the pin as per circuit
 
IRrecv irrecv(IR_RECV_PIN);
decode_results results;
 
void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
}
 
void loop()
{
  if (irrecv.decode(&results))
  {
  Serial.print("0x");
  Serial.println(results.value, HEX); //print the HEX code
  irrecv.resume();
  }
  delay(200);
}
