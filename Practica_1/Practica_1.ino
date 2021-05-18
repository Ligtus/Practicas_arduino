
int led = 2;

void setup() {
  
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH);   // Encendemos la salida
  delay(1000);                       // esperamos 1 segundo
  digitalWrite(led, LOW);    // apagamos el led
  delay(1000);                       // esperamos 1 segundo
}
