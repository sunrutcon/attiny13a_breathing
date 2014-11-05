
/* Attiny 13a Breathing */

/** pwm pin, digital pin 0
 *  this is hardware IC pin 5
 */
const static int led = 0;

/** number of steps for  increasing breath speed */
const static int p = 5;

/** initial breath constant */
  const static int r = 5;
  
/** the setup routine runs once when you press reset: */
void setup() {                
  pinMode(led, OUTPUT);     
}

void loop() {
  for(int j=1; j<p; j++) {
    breath(r, j);
  }
  for(int j=p; j>1; j--) {
    breath(r, j);
  }
}

void breath(int r, int p) {
  for(int i=0; i<255; i++) {
    analogWrite(led, i);
    delay((255-i)/(r*p) + 1);
  }
  delay(5);
  for(int i=255; i>0; i--) {
    analogWrite(led, i);
    delay((255-i)/(r*p) + 1);
  }
}
