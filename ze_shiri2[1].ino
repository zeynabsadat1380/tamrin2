int ledgreen = 2;//ledgreen connected to digital pin 2
int ledyellow = 4;//ledyellow connected to digital pin 4
int ledred = 7;//ledred connected to digital pin 7
void setup() {
  // put your setup code here, to run once:
  pinMode(ledgreen, OUTPUT);//sets the digital pin as output
  pinMode(ledyellow, OUTPUT);//sets the digital pin as output
  pinMode(ledred, OUTPUT);//sets the digital pin as output
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledgreen, HIGH);//turns the ledgreen on
  digitalWrite(ledyellow, LOW);//turns the ledyellow off
  digitalWrite(ledred, LOW);//turns the ledred off
  delay(3000);//waits for 3 second

  digitalWrite(ledyellow, HIGH);//turns the ledyellow on
  digitalWrite(ledgreen, LOW);//turns the ledgreen off
  digitalWrite(ledred, LOW);//turns the ledred off
  delay(1000);//waits for a second

  digitalWrite(ledred, HIGH);//turns the ledred on
  digitalWrite(ledgreen, LOW);//turns the ledgreen off
  digitalWrite(ledyellow, LOW);//turns the ledyellow off
  delay(2000);//waits for 2 second
}
