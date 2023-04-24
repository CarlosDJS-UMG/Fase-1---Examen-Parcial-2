int but = 10;
int leda = 2;
int ledr = 4;
int ledv = 6;
int ledb = 8;
bool estadobt = LOW;

void setup() {
  // put your setup code here, to run once:
  pinMode(but, INPUT);
  pinMode(leda, OUTPUT);
  pinMode(ledr, OUTPUT);
  pinMode(ledv, OUTPUT);
  pinMode(ledb, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  estadobt = digitalRead(but);
  if(estadobt == LOW){
    digitalWrite(leda, LOW);
    digitalWrite(ledr, LOW);
    digitalWrite(ledv, LOW);
    digitalWrite(ledb, LOW);
  }
  else if(estadobt == HIGH){
    digitalWrite(leda, HIGH);
    digitalWrite(ledr, HIGH);
    digitalWrite(ledv, HIGH);
    digitalWrite(ledb, HIGH);
  }
}