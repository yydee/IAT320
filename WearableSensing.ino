/*  Here is a link to the tutorial
 *  https://pulsesensor.com/pages/code-and-guide
 *  https://www.youtube.com/watch?v=RbB8NSRa5X4
*/

int PulseSensorPurplePin = A0; 
int LEDRED = 3;
int Signal;               
int Threshold = 350;
int brightness = 0;
int fadeAmount = 5; //how many points to fade the LED by


// The SetUp Function:
void setup() {
  pinMode(LEDRED, OUTPUT);      
   Serial.begin(9600);         // Set's up Serial Communication at certain speed.

}

// The Main Loop Function
void loop() {

  Signal = analogRead(PulseSensorPurplePin);  // Read the PulseSensor's value.

  Serial.println(Signal);                    // Send the Signal value to Serial Plotter.



if(Signal > Threshold){
  analogWrite(LEDRED,brightness);
  brightness = brightness + fadeAmount;
  if(brightness >= 255){
    brightness = 255;
  }
   
}else{
    analogWrite(LEDRED,brightness);
    brightness = brightness - fadeAmount;
    if(brightness <= 0){
      brightness = 0;
    }

}
   delay(10);

}
