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
  n++;
 } else {
  digitalWrite(leds[n],LOW);
  n--;
 }

 if(n >= ledSize){
  onoff=false;
 } else if (n<0) {
  onoff=true;
 }
 delay(pausa);
}
