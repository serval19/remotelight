void setup(){
  pinMode(5,INPUT);
  pinMode(2,OUTPUT);
  Serial.begin(115200);
}
void loop(){
  bool value=digitalRead(5);
  
  if(value==1){
    Serial.println("Motion detected.");
    digitalWrite(2,HIGH);

  }
  else{
    Serial.println("No motion.");
    digitalWrite(2,LOW);
  }
}