int redOutputPin = 11;
int greenOutputPin = 10;
int blueOutputPin = 9;

int redNow;
int greenNow;
int blueNow;
int colourChanging = 0;
const int green = 1;
const  int blue = 2;
const  int red = 3;
boolean greenCountUp;
boolean blueCountUp;
boolean redCountUp;

void setup()
{
  pinMode(redOutputPin, OUTPUT);
  pinMode(greenOutputPin, OUTPUT);
  pinMode(blueOutputPin, OUTPUT);
  redNow = 255;
  greenNow = 255;
  blueNow = 0;
//  Serial.begin(38400);
}

void loop()
{
  analogWrite(redOutputPin, redNow);
  analogWrite(greenOutputPin, greenNow);
  analogWrite(blueOutputPin, blueNow);
//Serial.print("Green: ");
//Serial.println(greenNow, DEC);
//Serial.print("Blue: ");
//Serial.println(blueNow, DEC);
//Serial.print("Red: ");
//Serial.println(redNow, DEC);

  if(redNow == 255 && greenNow == 255 && blueNow == 0) colourChanging = green;

  if(redNow == 255 && greenNow == 0 && blueNow == 0) colourChanging = blue;

  if(redNow == 255 && greenNow == 0 && blueNow == 255) colourChanging = red;

  if(redNow == 0 && greenNow == 0 && blueNow == 255) colourChanging = green;

  if(redNow == 0 && greenNow == 255 && blueNow == 255) colourChanging = blue;

  if(redNow == 0 && greenNow == 255 && blueNow == 0) colourChanging = red;


  if(colourChanging == green)
  {
    if(greenNow == 0) greenCountUp = true;
    if(greenNow == 255) greenCountUp = false;
    //      greenCountUp ? greenNow++ : greenNow--;
    if(greenCountUp)
    {
      greenNow++;
    }
    else
    {
      greenNow--;
    }
  }

  if(colourChanging == blue)
  {
    if(blueNow == 0) blueCountUp = true;
    if(blueNow == 255) blueCountUp = false;
    //    blueCountUp ? blueNow++ : blueNow--;
    if(blueCountUp)
    {
      blueNow++;
    }
    else
    {
      blueNow--;
    }
  }

  if(colourChanging == red)
  {
    if(redNow == 0) redCountUp = true;
    if(redNow == 255) redCountUp = false; 
    //  redCountUp ? redNow++ : redNow--;
    if(redCountUp)
    {
      redNow++;
    }
    else
    {
      redNow--;
    }
  }

delay(10);  
}

