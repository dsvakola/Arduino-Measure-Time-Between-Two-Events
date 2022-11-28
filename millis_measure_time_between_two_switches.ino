int sw1=1;
int sw2=7;
int sw1EventTime; 
int sw2EventTime; 
int interval; 

 void setup()
 {
  Serial.begin(9600);
  pinMode(sw1,INPUT);
  pinMode(sw2,INPUT);
 }

 void loop()
 {
  if(digitalRead(sw1)==LOW)
  { 
    sw1EventTime = millis(); 
  } 
  
  if(digitalRead(sw2)==LOW)
  { 
    sw2EventTime = millis(); 
  } 

  if(digitalRead(sw1)==HIGH && digitalRead(sw2)==HIGH)
  {
    interval=0;
  }
    interval=sw1EventTime-sw2EventTime; 
    Serial.print("Duration: ");
    Serial.println(interval);
 }
