
/* Attiny 13a Breathing */

int led = 0;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
  
  for(int i=0; i<255; i++) {
    analogWrite(led, i);
    delay(i<10 ? 50 : 20);
  }
  for(int i=255; i>0; i--) {
    analogWrite(led, i);
    delay(i<10 ? 50 : 20);
  }
}
