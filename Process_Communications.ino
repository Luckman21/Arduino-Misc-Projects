//Demo of communicating between Arduino and Processing
import processing.serial.*; //include the serial management library

Serial.myPort; //Create object from Serial class to connect to the Arduino

PFont f; //define a font object for text to be displayed on the screen
char val = ' '; //this variable will store the data sent from the Arduino

void setup() {
  size (600, 600); //set to the width and height of your window
  String portName = Serial.list()[0]; //get the port Arduino is connected to 
  myPort = new Serial(this, portName, 9600); //assign this port to a variable
  println(portName);//confirm you have a valid port
  f = createFont("Arial", 24); //assign the font you'll use for the screen text
  textFont(f); //setting the current font
}

void draw() {
  delay(100);
  background(0); //redraw black background
  fill(255);//set colour to white
  text("Click mouse to send 'blink' to Arduino", 100, 300); //screen text

  //read data from the Arduino board
  if (myPort.available()>0){ //if something came from the Arduino
    val = myPort.readChar(); //read the character
    println(val); //print the data you get from your Arduino
  }
  switch(val){
    case'1'://if '1' sent from Arduino
      fill(200,0,0); //draw a red circle
      ellipse(100,200,50,50);
      break;
    case'2'://if '2' sent from Arduino
      fill(0,200,0); //draw a green circle
      ellipse(300,200,50,50);
      break;
    case'3'://if '3' sent from Arduino
      fill(0,0,200); //draw a blue circle
      ellipse(500,200,50,50);
      break;
    default:
      break;
  }
}

void mousePressed(){ //if the mouse is clicked
  myPort.write('L'); //send signal to Arduino to flash LEDs
}
