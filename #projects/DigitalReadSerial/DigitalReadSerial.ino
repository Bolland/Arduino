/*
  DigitalReadSerial
 Reads a digital input on pin 2, prints the result to the serial monitor 
 
 This example code is in the public domain.
 */

// digital pin 2 has a pushbutton attached to it. Give it a name:
int ledPin = 8; // choose the pin for the LED
int switchPin =2; // choose the input pin (for a pushbutton)
int val = 0; // variable for reading the pin status
int counter = 0;
int currentState = 0;
int previousState = 0;


void setup() {
pinMode(ledPin, OUTPUT); // declare LED as output
pinMode(switchPin, INPUT); // declare pushbutton as input
Serial.begin(9600);
}

void loop(){
val = digitalRead(switchPin); // read input value
if (val == HIGH) { // check if the input is HIGH (button released)

  digitalWrite(ledPin, HIGH); // turn LED on

//for (int x=0;x<counter;x++)
//{
 // digitalWrite(ledPin, HIGH); // turn LED on
//  delay(100);
//  digitalWrite(ledPin, LOW); // turn LED off
//  delay(100);
//}

//Serial.println("LED AN");
currentState = 1;
}
else {
digitalWrite(ledPin, LOW); // turn LED off
//Serial.println("LED AUS");
currentState = 0;
}
if(currentState != previousState){
if(currentState == 1){
counter = counter + 1;
Serial.print("Geil, schon ");
Serial.print(counter);
Serial.println(" Mal gedrueckt! Geiler Typ");
}
}
previousState = currentState;
delay(250);
}



