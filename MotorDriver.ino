const int leftForward = 4;
const int leftBackward = 3;
const int rightForward = 5;
const int rightBackward = 6;
 
void setup() 
{
  pinMode(leftForward , OUTPUT);
  pinMode(leftBackward , OUTPUT);
  pinMode(rightForward , OUTPUT);
  pinMode(rightBackward , OUTPUT);
 
}
 
void loop()
{
  digitalWrite(leftForward , HIGH);
  delay(1000);
  digitalWrite(leftBackward , LOW);
  delay(1000);
  digitalWrite(rightForward , HIGH);
  delay(1000);
  digitalWrite(rightBackward , LOW);
  delay(1000);
 
}
