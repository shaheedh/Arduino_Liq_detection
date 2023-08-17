
//const int pin = 8;  // Replace with the desired digital pin number
const int pin1 = A0;  // Replace with the desired Analog pin number
void setup() {
  Serial.begin(9600);  // Initialize the serial monitor
  
 // pinMode(pin, INPUT);  // Set the pin as an input
  pinMode(pin1, INPUT);  // Set the Analog pin as an input
}

void loop() {
  //int data = digitalRead(pin);  // Read the data from the digital pin
  int data1 = analogRead(pin1);  // Read the data from the Analog pin
  Serial.println(analogRead(pin1));
  
  //if (data == HIGH) {
  //  Serial.println("Detected");  // Print "Detected" if the pin is high
  //} else {
  //  Serial.println("Not Detected");  // Print "Not Detected" if the pin is low
  //}
  if (data1 > 500) {
    Serial.println("Detected");  // Print "Detected" if the pin is high
  } else {
    Serial.println("Not Detected");  // Print "Not Detected" if the pin is low
  }
  
  delay(100);  // Delay for stability
}
