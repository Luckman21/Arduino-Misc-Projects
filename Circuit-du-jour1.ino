char val; //data recieved from Processing app
int btn1 = 6;
int btn2 = 5;
int btn3 = 4;
int btn4 = 3;
int bt1Val, bt2Val, bt3Val, bt4Val; //if true, button is pressed, otherwise, false

long btThresh = 100;
long lastBt1, lastBt2, lastBt3, lastBt4 = millis();
int led1 = 11;
int led2 = 10;

void setup(){
  pinMode (btn1, INPUT);
  pinMode (btn2, INPUT);
  pinMode (btn3, INPUT);
  pinMode (btn4, INPUT);
  pinMode (led1, OUTPUT);
  pinMode (led2, OUTPUT);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  Serial.begin(9600);
}

void loop(){
  if (Serial.available()){
    val = Serial.read();
    if (val == 'L'){
      for (int i = 1; i <= 5; i++){
        digitalWrite(led1, HIGH);
        delay(100);
        digitalWrite(led2, HIGH);
        delay(100);
        digitalWrite(led1, LOW);
        delay(50);
        digitalWrite(led2, LOW);
      }
    }
  }

  bt1Val = digitalRead(btn1);
  if (bt1Val){
    if (millis() - lastBt1 > btThresh){
      Serial.write('1');
      lastBt1 = millis();
    }
  }
  bt2Val = digitalRead(btn2);
  if (bt2Val){
    if (millis() - lastBt2 > btThresh){
      Serial.write('2');
      lastBt2 = millis();
    }
  }
  bt3Val = digitalRead(btn3);
  if (bt3Val){
    if (millis() - lastBt3 > btThresh){
      Serial.write('3');
      lastBt3 = millis();
    }
  }
  bt4Val = digitalRead(btn4);
  if (bt4Val){
    if (millis() - lastBt4 > btThresh){
      for (int i = 1; i <=3; i++) {
        Serial.write('1');
        delay(50);
        Serial.write('2');
        delay(50);
        Serial.write('3');
        delay(50);
      }
      lastBt4 = millis();
    }
  }
  delay(50);
}
