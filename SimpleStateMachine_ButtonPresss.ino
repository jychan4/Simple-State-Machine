  const int InternalLED = 13; 
  const int ExternalLED = 12; 
  
  //the button
  int PressedButton = A0;
  
  //a counter for how many clicks you have done
  int counter = 0;

  // the setup routine runs once when you press reset:
  void setup() {
  
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  
  // make the pin inputs and outputs:
  pinMode(PressedButton, INPUT);
  pinMode(InternalLED, OUTPUT);
  pinMode(ExternalLED, OUTPUT);
  }

  // the loop routine runs over and over again forever:
  void loop() {
  
  //the button state as it relates to the press of the physical button
  int buttonState = digitalRead(PressedButton);
  
  //for debugging in terminal
  Serial.println(buttonState);
  delay(30);

  Serial.println(counter);
  delay(30);

  //starting the code / counting upon presses
  if(buttonState == HIGH){
    counter++;
    delay(100);
   }

   else if(counter == 1){
    digitalWrite(ExternalLED, LOW);
   }

   else if(counter == 2){
    digitalWrite(ExternalLED, LOW);
   }
   
   else if(counter == 3){
    digitalWrite(ExternalLED, LOW);
    }
   
   else if(counter == 4){
    digitalWrite(ExternalLED, HIGH);
    }

   //resetting counter back to zero to reset 
   else{
    digitalWrite(ExternalLED, LOW);
    counter = 0;
    }




  
   
 }
