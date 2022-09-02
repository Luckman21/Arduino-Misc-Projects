int green1 = 6;
int yellow1 = 7;
int red1 = 8;
int button = 9; // switch is on pin 9
int red2 = 10;
int yellow2 = 11;
int green2 = 12;

void setup(){
  //put set up code here to run once
    
    pinMode(red1, OUTPUT);
    pinMode(yellow1, OUTPUT);
    pinMode(green1, OUTPUT);
    pinMode(red2, OUTPUT);
    pinMode(yellow2, OUTPUT);
    pinMode(green2, OUTPUT);
    pinMode(button, INPUT);
}

void loop(){
  //put main code here to run repeatedly
  digitalWrite(green1, HIGH);
  digitalWrite(green2, HIGH);
    if (digitalRead(button) == HIGH){
        delay(15); // software debounce
        if (digitalRead(button) == HIGH) {
            // if the switch is HIGH, ie. pushed down - change the lights!
            changeLights();
            delay(1000); // wait for 1 second
        }
    }
}

void changeLights(){
  
    // green off, yellow on for 3 seconds
    digitalWrite(green1, LOW);
    digitalWrite(yellow1, HIGH);
    digitalWrite(red1, LOW);
    digitalWrite(green2, HIGH);
    digitalWrite(yellow2, LOW);
    digitalWrite(red2, LOW);
    delay(3000);

    digitalWrite(green1, LOW);
    digitalWrite(yellow1, HIGH);
    digitalWrite(red1, LOW);
    digitalWrite(green2, LOW);
    digitalWrite(yellow2, HIGH);
    digitalWrite(red2, LOW);
    delay(2000);

    // turn off yellow, then turn red on for 5 seconds
    digitalWrite(yellow1, LOW);
    digitalWrite(red1, HIGH);
    digitalWrite(yellow2, HIGH);
    digitalWrite(red2, LOW);
    delay(3000);
  
    // turn off all lights
    digitalWrite(red1, LOW);
    digitalWrite(yellow2, LOW);
    digitalWrite(red2, HIGH);
    delay(1000);

    digitalWrite(green1, HIGH);
    digitalWrite(red2, HIGH);
    delay(2000);

    digitalWrite(red2, LOW);
    delay(1000);

    digitalWrite(green2, HIGH);
    delay(1000);
}
