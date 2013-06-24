// This code is based on a program called "Sweep"
// by BARRAGAN <http://barraganstudio.com> 
// (which is an example placed in the public domain found under the example menu of the Arduino IDE)
// and we also utilize the Servo.h Library

//Creative commons license for my modifications
//
//I created additional functions created for handling continuous-rotation-servos as motors
//Forward, Backward, Stop, Stop, and attachServo
//by Gregory Kielian  < www.kielian.net > 
//Special thanks to Chris Newton for his mentoring and help debugging the first drafts


#include <Servo.h> 
 
Servo LeftWheel;  // create servo object to control a servo 
Servo RightWheel;  // create servo object to control a servo 

// Note: a maximum of eight servo objects can be created 

int LWPin = 10; //set the pin number for your left servo-motors (just change the number if not pin 9)
int RWPin = 11; //right-wheel control pin



void setup() 
{ 
  LeftWheel.attach( LWPin );  //  Connects LeftWheel to the pin LWPin
  RightWheel.attach( RWPin );  // Connects another wheel to be controlled by the pin RWPin

} 
 
 
void loop() 
{ 
     Rotate(30); // rotate at 30% power
     delay(2000); // keep on doing this for 2 seconds or 2000 milliseconds


     Rotate(-30); // Rotate the other way
     delay(1000); // for 1 second


     Forward(100); // Full steam ahead!
     delay(3000); // for 3 seconds


     Backward(50); // 50% power backwards
     delay(500); // for half-a-second

 
     Stop(); // stop the wheels
     delay(4000); // for 4 seconds
} 









void Forward(int speed)
{
    attachServos(); //in case we disconnected them
     
    speed = (int) (speed/100.0*90.0 + 90) ;  // translates it to servo-speak (servo input is from 0-180)
    LeftWheel.write(speed);             
    RightWheel.write(-speed); // Right wheel is backwards    
}



void Backward (int speed)
{
    attachServos(); //in case we disconnected them
     
    speed = (int) (speed/100.0*90.0 + 90) ;  // translates it to servo-speak (servo input is from 0-180)
    LeftWheel.write(-speed);             
    RightWheel.write(speed); // Right wheel is backwards    
}



void Rotate (int speed)
{
    attachServos(); //in case we disconnected them
     
    speed = (int) (speed/100.0*90.0 + 90) ;  // translates it to servo-speak (servo input is from 0-180)
    LeftWheel.write(speed);             
    RightWheel.write(speed); // Right wheel is backwards    
}


void Stop()
{
  LeftWheel.detach();
  RightWheel.detach();
}







void attachServos()
{
   LeftWheel.attach(LWPin);
   RightWheel.attach(RWPin);

}
