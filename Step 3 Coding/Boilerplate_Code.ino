/* HC-SR04 Sensor
   https://www.dealextreme.com/p/hc-sr04-ultrasonic-sensor-distance-measuring-module-133696
  
   This sketch reads a HC-SR04 ultrasonic rangefinder and returns the
   distance to the closest object in range. To do this, it sends a pulse
   to the sensor to initiate a reading, then listens for a pulse 
   to return.  The length of the returning pulse is proportional to 
   the distance of the object from the sensor.
     
   The circuit:
  * VCC connection of the sensor attached to +5V
	* GND connection of the sensor attached to ground
	* TRIG connection of the sensor attached to digital pin 2
	* ECHO connection of the sensor attached to digital pin 4
 
 
   Original code for Ping))) example was created by David A. Mellis
   Adapted for HC-SR04 by Tautvidas Sipavicius
 
   This example code is in the public domain.
 */
#include <Servo.h>  

Servo LeftWheel;  // create servo object to control a servo 
Servo RightWheel;  // create servo object to control a servo 
// Note: a maximum of eight servo objects can be created 

const int LWPin = 9; //set the pin number for your left servo-motors (just change the number if not pin 9)
const int RWPin = 10; //right-wheel control pin


const int trigPin = 2;
const int echoPin = 4;
const int turntime = 600; //delay for all rotations to happen
 
void setup() {
  // initialize serial communication:
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

}
 
void loop() {
  long cm;  
  cm = getDistance();
  
  if ( cm < 30 )
  {
  	Rotate(700, 20);
  }
        stepForward(10, 100);  //stepForward(duration of step, % of full power);
  
  
}


void Forward(int speed) {
    attachServos(); //in case we disconnected them
    speed = (int) (speed/100.0*90.0 + 90) ;  // translates it to servo-speak (servo input is from 0-180)
    LeftWheel.write(speed);             
    RightWheel.write(-speed); // Right wheel is backwards    
}
void stepForward (int time, int speed) {
    Forward(speed);
    delay(time);
}
void Backward (int speed) {
    attachServos(); //in case we disconnected them
    speed = (int) (speed/100.0*90.0 + 90) ;  // translates it to servo-speak (servo input is from 0-180)
    LeftWheel.write(-speed);             
    RightWheel.write(speed); // Right wheel is backwards    
}
void stepBackward (int time, int speed) {
    Backward(speed);
    delay(time);
}

void Rotate (int speed, int turntime) {
    attachServos(); //in case we disconnected them
     
    speed = (int) (speed/100.0*90.0 + 90) ;  // translates it to servo-speak (servo input is from 0-180)
    LeftWheel.write(speed);             
    RightWheel.write(speed); // Right wheel is backwards 
    delay(turntime);
}

void Stop() {
  LeftWheel.detach();
  RightWheel.detach();
}

void attachServos() {
   LeftWheel.attach(LWPin);
   RightWheel.attach(RWPin);
}
  
long getDistance() {
  long duration, d1, d2, d3, cm;
  // The sensor is triggered by a HIGH pulse of 10 or more microseconds.
  // Give a short LOW pulse beforehand to ensure a clean HIGH pulse:
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(80); // was 10
  digitalWrite(trigPin, LOW);
 
  // Read the signal from the sensor: a HIGH pulse whose
  // duration is the time (in microseconds) from the sending
  // of the ping to the reception of its echo off of an object.
  
  // get 3 readings, use middle one to avoid noise.
  d1 = pulseIn(echoPin, HIGH);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(80); // was 10
  digitalWrite(trigPin, LOW);
  d2 = pulseIn(echoPin, HIGH);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(80); // was 10
  digitalWrite(trigPin, LOW);
  d3 = pulseIn(echoPin, HIGH);
  
  if (d1 < d2 && d2 < d3) {
    duration = d2;
  }
  if (d1 < d3 && d3 < d2) {
    duration = d3;
  }  
  if (d2 < d3 && d3 < d1) {
    duration = d3;
  }
  if (d2 < d1 && d1 < d3) {
    duration = d1;
  }
  if (d3 < d2 && d2 < d1) {
    duration = d2;
  }
  if (d3 < d1 && d1 < d2) {
    duration = d1;
  }
  
  // convert the time into a distance
  cm = microsecondsToCentimeters(duration);
  return cm;
}
  
long microsecondsToCentimeters(long microseconds) {
  // The speed of sound is 340 m/s or 29 microseconds per centimeter.
  // The ping travels out and back, so to find the distance of the
  // object we take half of the distance travelled.
  return microseconds / 29 / 2;
}
