void setup() {
  // put your setup code here, to run once:
#define L26 26
#define L28 28
#define L30 30
#define L32 32
#define L34 34
#define L36 36
#define L38 38
#define L40 40
  pinMode(L26, OUTPUT);
  pinMode(L28, OUTPUT);
  pinMode(L30, OUTPUT);
  pinMode(L32, OUTPUT);
  pinMode(L34, OUTPUT);
  pinMode(L36, OUTPUT);
  pinMode(L38, OUTPUT);
  pinMode(L40, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  int x = 1000;

  digitalWrite(L26, LOW);
  digitalWrite(L28, LOW);
  digitalWrite(L30, LOW);
  digitalWrite(L32, LOW);
  digitalWrite(L34, LOW);
  digitalWrite(L36, LOW);
  digitalWrite(L38, LOW);
  digitalWrite(L40, LOW);

  while (true) {
    digitalWrite(L26, HIGH);
    delay(x);
    digitalWrite(L28, HIGH);
    delay(x);
    digitalWrite(L30, HIGH);
    delay(x);
    digitalWrite(L32, HIGH);
    delay(x);
    digitalWrite(L34, HIGH);
    delay(x);
    digitalWrite(L26, LOW);
    digitalWrite(L28, LOW);
    digitalWrite(L30, LOW);
    digitalWrite(L32, LOW);
    digitalWrite(L34, LOW);
    delay(x);
  }
}
