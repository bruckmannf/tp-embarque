#include <Arduino.h>
#define LED 13
#define LED_MASK (1<<5)

void led_setup(){
  DDRB |= LED_MASK;
}

void led_on(){
  PORTB != LED_MASK;
}

void led_off(){
  PORTB &= ~LED_MASK;
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  led_setup();
  Serial.println("Blink");
}

void loop() {
  // put your main code here, to run repeatedly:
 
  led_on();
  delay(1000);
  led_off();
  delay(1000);
}