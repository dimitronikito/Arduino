//Dimitrios Nikitopoulos ASSIGNMENT 6
int ledPin = 7;       //sets value of pin to 7
int switchPin = 12;     //sets value of pin to 12
void setup() {
  pinMode(ledPin, OUTPUT);    //sets digital pin as Output
  pinMode(switchPin, INPUT_PULLUP);   //sets analog pin as Input
}

void loop() {               //code runs over and over again
  int switchState = digitalRead(switchPin); //Reads in voltage
  if (switchState) {        //if not connected to ground
    delay(1000);              
    digitalWrite(ledPin, HIGH); //turn on light
  }
  else {                        //if connected to ground
    delay(2000);
    digitalWrite(ledPin, LOW);  //turn light off
                    
  }

}
