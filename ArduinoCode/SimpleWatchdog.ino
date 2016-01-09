#include <avr/wdt.h>

#define led 13 // pin 13 is connected to a led on Arduino Uno

void setup()
{
  pinMode(led, OUTPUT);      // set pin mode
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                // wait for a tenth of a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(100);                // wait for a tenth of a second
}

void loop(){
  wdt_enable(WDTO_15MS);     // enable the watchdog
                             // will fire after 15 ms without reset

  while(1)
  {
//     wdt_reset();          // uncomment to avoid reboot
  }
}
 
