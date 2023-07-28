const int buttonPin = 2;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(buttonPin) == LOW) {
    // Button is pressed, perform an action (e.g., toggle an LED)
    // Replace the action below with your desired functionality
    digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN));
    
    delay(50); // Adjust the delay as needed for your specific requirements
    
    // Add additional code or actions here if needed
  }
  
  // Add any other code or actions here if needed
}
