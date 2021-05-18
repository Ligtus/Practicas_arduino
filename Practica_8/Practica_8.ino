#include <LiquidCrystal.h>

// Iniciar la libreria
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
 tiempo = 0;

void setup() {
  // Cargar las columnas y filas que tiene la pantalla LCD
  lcd.begin(16, 2);
  // Imprimir mensaje en la pantalla LCD
  lcd.print("Hello World!");
}

void loop() {
  // Cargar corsor en la columna 0 fila dos
  lcd.setCursor(0, 1);
  // imprimir tiempo cada segundo
  tiempo++;
  lcd.print(tiempo / 1000);
}
 
