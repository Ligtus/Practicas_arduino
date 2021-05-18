const int pinSize = 4;
bool onoff = true;
int pines[pinSize], n = 0, pausa = 100, buzzerPin = 5, freq = 5000;


void setup() {
  pines[0] = 6, pines[1] = 9, pines[2] = 10, pines[3] = 11;  
  for (int i = 0; i < pinSize; i++) {
    pinMode(pines[i], OUTPUT);
  }
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
   if(onoff){
  digitalWrite(pines[n],HIGH);
  analogWrite(buzzerPin, 255/n);
  pausa-=1;
  n++;
 } else {
  digitalWrite(pines[n],LOW);
  analogWrite(buzzerPin, 255/n);
  pausa-=1;
  n--;
 }

if (pausa < 0){
  pausa = 100;
  delay(pausa);
}

 if(n >= pinSize){
  onoff=false;
 } else if (n<0) {
  onoff=true;
 }
 delay(pausa);
}
