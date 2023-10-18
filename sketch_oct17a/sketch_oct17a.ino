#define LED 3 
#define PART A2
 void setup() {
  pinMode (LED, OUTPUT); 
  pinMode(PART, INPUT);

}

void loop() {
  digitalWrite(LED, HIGH);
 delay(analogRead(PART));
  digitalWrite(LED, LOW);
  delay(analogRead(PART));
analogRead(PART);


