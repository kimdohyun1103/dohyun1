int redPin = 11;
int greenPin = 10;
int bluePin = 9;
 
void setup()
{
    pinMode(redPin, OUTPUT);

 pinMode(greenPin, OUTPUT);
 pinMode(bluePin, OUTPUT); 
}
 
void loop()
{
  setColor(255, 0, 0); // red
  delay(500);
  setColor(0, 255, 0); // green
  delay(500);
  setColor(0, 0, 255); // blue
  delay(500);
  setColor(153, 255, 51); // yellow
  delay(500); 
  setColor(255, 225, 204); //
  delay(500);
   setColor(80, 80, 80); // 
  delay(500);
  setColor(0, 255, 255); // aqua
  delay(500);
}
 
void setColor(int red, int green, int blue)
{
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue); 
}
