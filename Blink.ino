/*
Tohle je tutoriál jak nastavit VisualCode pro Arduino
Do nového projeku zkopírovat soubory arduino.json a c_cpp_properties.json
vlevo dole pak zkontrolovat COM port a jazyk 
*/
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
