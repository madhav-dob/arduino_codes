int sensorValue = analogRead(A0); 
int start_value = sensorValue;
  
void setup() {
  Serial.begin(9600);  // Initialize serial communication
  //int sensorValue = analogRead(A1); 

  //Serial.println("down");
  //delay(1000);
  
  // Read the analog input from pin A0

 for (int i = 0; i < 19; i++) {
  Serial.println("down");
  //Serial.println(i);
  delay(100);
  }

  //Serial.println("Potentiometer value :");
  //Serial.println(sensorValue);
  

  int points = sensorValue/ 54;
  
  //Serial.println("Points :");
  //Serial.println(points);
  

  for (int j = 0 ; j < points+1 ; j++){
  Serial.println("up");
  //Serial.println(j);
  delay(100);
  }
  Serial.println(start_value);
  
}

void loop() {
  int curr_value = analogRead(A0);
//  Serial.println(curr_value);
  if (curr_value < start_value - 10) {
    int points = (start_value-curr_value)/ 54;
    Serial.println("down");
    start_value = curr_value;
    delay(70);  // Debounce delay

  }
    if (curr_value > start_value + 10) {
      
    Serial.println("up");
    start_value = curr_value;
    delay(70);  // Debounce delay

  }



}
