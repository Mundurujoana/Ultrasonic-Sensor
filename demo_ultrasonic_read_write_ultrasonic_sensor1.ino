const int trigPin =10;
  const int echoPin =9;

long duration, distance;

void setup()
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  
  Serial.begin(9600);
  Serial.println("the setup is done");
    
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  
}

void loop()
{
  digitalWrite(trigPin, LOW);
  
  
    duration =pulseIn(echoPin, HIGH);
      
      distance =(duration*.0343)/2;
  
  Serial.println(distance);
    delay(100);
  
  if (distance > 150){
    digitalWrite(4, HIGH);
  }else{
      digitalWrite(4, LOW);
    }
 
  if ((distance > 50)){
    digitalWrite(2, HIGH);
  }else{
      digitalWrite(2, LOW);
    }
  
 
 
  
 
}
