/* YourDuino Basic Robot Kit: Test Servo movement
 - WHAT IT DOES: Tests the servo by commanding it to go to several different directions
   to "Look Around". You may want to reposition the servo arm on the servo to get the
   positions to look around correctly.
 - SEE the comments after "//" on each line below
 - CONNECTIONS:
   - 
   - 
 - V1.00 09/11/12
   Questions: terry@yourduino.com */

/*-----( Import needed libraries )-----*/
#include <Servo.h>

/*-----( Declare Constants and Pin Numbers )-----*/
#define SERVO_PIN 11 // Servo plugs into Pin 11

/*-----( Declare objects )-----*/
Servo myservo;  // create servo object to control a servo

/*-----( Declare Variables )-----*/
int pos;    // variable to store the servo position

void setup()   /****** SETUP: RUNS ONCE ******/
{
  myservo.attach(SERVO_PIN);  // attaches the servo on pin 11 to the servo object

}//--(end setup )---


void loop()   /****** LOOP: RUNS CONSTANTLY ******/
{
  for(pos = 0; pos < 180; pos += 30)  // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 30 degree 
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(1000);                      // Wait 500ms between pings 
  }
    
  for(pos = 180; pos>=1; pos -= 30)     // goes from 180 degrees to 0 degrees 
  {                                
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(1000);
  }    

}//--(end main loop )---

/*-----( Declare User-written Functions )-----*/
//NONE

//*********( THE END )***********
