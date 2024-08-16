int ledPin
void ledpatern1();
void ledpatern2();
void ledpatern3();
void ledpatern4();
void setup() {
  Serial.begin(9600);
  for(ledPin=2;ledPin<=6;ledPin++)
  {
    pinMode(ledPin.OUTPUT);
    }
    Serial.println("Enter the pattern number (1,2,3,4)");
}
void ledpatern1()
{
 for(ledPin=2;ledPin<=6;ledPin++)
  {
    digitalWrite(ledPin.HIGH);
    } 
    for(ledPin=2;ledPin<=6;ledPin++)
  {
    digitalWrite(ledPin.LOW);
    } 
  }
void ledpatern2()
{
  for(ledPin=2;ledPin<=6;ledPin++)
  {
    digitalWrite(ledPin.HIGH);
    delay(1000);
    digitalWrite(ledPin.LOW);
    delay(1000);
    } 
  
  }
void ledpatern3()
{
  for(ledPin=5;ledPin<=0;ledPin--)
  {
    digitalWrite(ledPin.HIGH);
    delay(1000);
    } 
    for(ledPin=5;ledPin<=0;ledPin--)
  {
    digitalWrite(ledPin.LOW);
    delay(1000);
    } 
  
  }
void ledpatern4()
{
  for(ledPin=1;ledPin<=6;ledPin+2)
  {
    digitalWrite(ledPin.HIGH);
    delay(1000);
    } 
    for(ledPin=2;ledPin<=6;ledPin+2)
  {
    digitalWrite(ledPin.LOW);
    delay(1000);
    }
  for(ledPin=1;ledPin<=6;ledPin+2)
  {
    digitalWrite(ledPin.HIGH);
    delay(1000);
    } 
    for(ledPin=2;ledPin<=6;ledPin+2)
  {
    digitalWrite(ledPin.LOW);
    delay(1000);
    }  
  
  }
void loop() {
  if(Serial.avilable()>0)
  {
    int reqdpatern = Serial.parseInt();
    if(reqdpatern ==1)
    ledpatern1();
    if(reqdpatern ==2)
    ledpatern2();
    if(reqdpatern ==3)
    ledpatern3();
    if(reqdpatern ==4)
    ledpatern4();
    
    }
}
