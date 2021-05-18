#include <Servo.h>

Servo servo_9;
int espera = 15, boton = 2, pos = 0;
bool direccion = false;

void setup()
{
  servo_9.attach(9, 500, 2500);
  pinMode(boton,INPUT);
}

void loop()
{
  if (pos >= 180){
    direccion = true;
  } else if (pos <= 0) {
    direccion = false;
  }

  if(digitalRead(boton) == HIGH){
    servo_9.write(pos);
    delay(espera);
    if(direccion){
      pos--;
    } else {
      pos++;
    }
  }
}
