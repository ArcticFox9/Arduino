
// initialize variables
int blinkie = 13;     
int delayx = 500;
int buzzy = 12;
int drunky = 4;



// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(blinkie, OUTPUT);
  pinMode(buzzy, OUTPUT);
  pinMode(drunky, OUTPUT);
}


// the loop function runs over and over again forever
void loop() {
  digitalWrite(blinkie, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(buzzy, HIGH);   // turn the LED on (HIGH is the voltage level)  delay(delayx);                       // wait for a second
  delay(delayx);                       // wait for a second

  digitalWrite(blinkie, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(buzzy, LOW);    // turn the LED off by making the voltage LOW
  delay(delayx);                       // wait for a second
  
}
