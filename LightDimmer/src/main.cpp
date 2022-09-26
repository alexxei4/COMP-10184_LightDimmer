#include <Arduino.h>

// Mohawk College - COMP-10184 
// // I , Alexei Ougriniouk, student number #000776331, Certify this is my work and no one else has copied me 
// LightDimmer- Lab 3
//  MY answers for the questions 

//What’s the total on and off duration? 
//on for 1 ms , off for 9ms 


//// What’s the duty cycle? 
//10%
//1 / 10 = 0.10  X 100 = 10

// What’s the effect on the LED? 
//it just stays on , in my opinion it is due to the fact how the cycle is only 10msin total
//
byte PreviousButtonState = LOW;
byte CurrentledState = LOW;





void setup() { 
  // configure the USB serial monitor 
  Serial.begin(115200); 
  
  // configure pin D5 as digital input - this is the pushbutton 
  pinMode(D5, INPUT_PULLUP); 
 
  // configure pin D4 as a digital output - this is the LED 
  pinMode(D4, OUTPUT); 




  

 
} 
 
 
void loop() { 
  // reads button input
  byte iButton = digitalRead(D5);
  
  // read the push button input... 
   if (iButton != PreviousButtonState) {
     PreviousButtonState = iButton;
      
        // LOW = PRESSED
      if(iButton == LOW) {
        // THIS SAVES THE STATE AND KEEPS IT ON AFTER PRESSING
        CurrentledState = (CurrentledState == HIGH) ? LOW: HIGH;
        // this is the output of the light 
        digitalWrite(D4, CurrentledState);
      
        

      }
     
  }
    
  }
  
