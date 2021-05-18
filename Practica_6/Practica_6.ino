const int EchoPin = 6;
const int TriggerPin = 5;
const int r = 11, g = 9, b = 10;

void setup() {
   Serial.begin(9600);
   pinMode(TriggerPin, OUTPUT);
   pinMode(EchoPin, INPUT);
}

void loop() {
   int cm = ping(TriggerPin, EchoPin);
    if (cm < 30){
      int cantidad = 30 - cm;
      if(cantidad > 10){
        cantidad = 10;
      } 
      digitalWrite(r, 255*cantidad/100);
    } else {
      digitalWrite(r, 0);
    }

    if (cm < 20) {
      int cantidad = 20 - cm;
      if(cantidad > 10){
        cantidad = 10;
      } 
      digitalWrite(g, 255*cantidad/100);
    } else {
      digitalWrite(g, 0);
    }

    if (cm < 10) {
      int cantidad = 10 - cm;
      if(cantidad > 10){
        cantidad = 10;
      } 
      digitalWrite(b, 255*cantidad/100);
    } else {
      digitalWrite(b, 0);
    }

   delay(50);
}

int ping(int TriggerPin, int EchoPin) {
   long duration, distanceCm;
   
   digitalWrite(TriggerPin, LOW);  
   delayMicroseconds(10);
   digitalWrite(TriggerPin, HIGH); 
   delayMicroseconds(10);
   digitalWrite(TriggerPin, LOW);
   
   duration = pulseIn(EchoPin, HIGH);  
   distanceCm = duration * 10 / 292/ 2;
   return distanceCm;
}
