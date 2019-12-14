/*   PRIZM Controller example program
 *   This example program will read the digital signal of the
 *   Ultrasonic sensor attached to the digital sensor port D3.
 *   The distance in centimeters of an object placed in front
 *   of the sensor will be sent to the serial monitor window.
 */

  #include <PRIZM.h>      // include the PRIZM Library
  PRIZM prizm;            // instantiate a PRIZM object “prizm” so we can use its functions

void setup() {     //this code runs once

  prizm.PrizmBegin();     // initialize PRIZM

  Serial.begin(9600);     // configure the serial monitor for 9600 baud rate
 
}

void loop() {     //this code repeats in a loop
  
  if (prizm.readSonicSensorCM(3)< 7){
    prizm.setServoPosition(1,0);
  }
  else {
    prizm.setServoPosition(1, 180);
  }

}
  




                    
