/*
Tohle je tutoriál jak nastavit VisualCode pro Arduino
Do nového projeku zkopírovat soubory arduino.json a c_cpp_properties.json
vlevo dole pak zkontrolovat COM port a jazyk 

Taky to hezky bliká když připojíte diody na D4 a D6
*/
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(6,OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  for (size_t i = 0; i < 5; i++)
  {
    digitalWrite(4, HIGH);
    digitalWrite(6, LOW);
    delay(70);
    digitalWrite(4, LOW);
    digitalWrite(6, HIGH);
    delay(70);
  }
  digitalWrite(6, LOW);
  delay(900);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  for (size_t i = 0; i < 5; i++)
  {
    digitalWrite(4, HIGH);
    digitalWrite(6, LOW);
    delay(70);
    digitalWrite(4, LOW);
    digitalWrite(6, HIGH);
    delay(70);
  }  
  digitalWrite(6, LOW); 
  delay(1000);                       // wait for a second
}
