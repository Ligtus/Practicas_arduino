const int ledSize = 3;
int leds[ledSize];
bool onoff = true;
int n = 0, pausa=90;


void setup() {
  leds[0] = 2;
  leds[1] = 0; 
  leds[2] = 4; 
  for(int i = 0; i < ledSize; i++){
    pinMode(leds[i], OUTPUT);  
  }  
}

void loop() {
 if(onoff){
  digitalWrite(leds[n],HIGH);
 } else {
  digitalWrite(leds[n],LOW);
 }
 n++;

 if(n >= ledSize){
  if(onoff){
    onoff = false;
  } else {
    onoff = true;
  }
  n=0;
 }
 delay(pausa);
}
