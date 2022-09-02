void setup() {
  // put your setup code here, to run once:
  #define L26 26
  #define L28 28
  pinMode(L26,OUTPUT);
  pinMode(L28,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
   for (int i = 0; i < 10; i++) {
    digitalWrite(L26,HIGH);
    delay(100);
    digitalWrite(L26,LOW);
    delay(100);
  }

   for (int i = 0; i < 10; i++) {
    digitalWrite(L28,HIGH);
    delay(100);
    digitalWrite(L28,LOW);
    delay(100);
  }
}
