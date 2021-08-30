/*  05. Push buttons */

#define BUTTON1 2           // button pin
#define N 3                 // number of LED
int LED[N] = {5, 6, 7};     // LED pin
int time_limit = 7;         // time limit to cross the road

void setup() {
  pinMode(BUTTON1, INPUT);        // set up button
  for(int i = 0; i < N; i++){
    pinMode(LED[i], OUTPUT);      // set up LED
  }
  digitalWrite(LED[2], HIGH);     // set green on start up
}

void loop() {
  int s1 = digitalRead(BUTTON1);  // read button

  // if button1 are pressed (LOW)
  if (s1 == LOW){
    digitalWrite(LED[2], LOW);    // turn off green
    digitalWrite(LED[1], HIGH);   // turn on yellow
    delay(2000);              // wait 2 sec
    digitalWrite(LED[1], LOW);   // turn off yellow
    digitalWrite(LED[0], HIGH);  // turn on red
    delay(time_limit*1000);      // wait for $time_limit seconds
    digitalWrite(LED[1], HIGH);   // turn on yellow
    delay(2000);              // wait 2 sec
    digitalWrite(LED[0], LOW);    // turn off red
    digitalWrite(LED[1], LOW);    // turn off yellow
    digitalWrite(LED[2], HIGH);   // turn on green
  }
}
