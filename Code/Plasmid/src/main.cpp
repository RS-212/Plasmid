#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
  // Serial connection to the PC
  Serial0.begin(9600);
  while(!Serial0);
  delay(500);
  Serial0.printf("Serial Monitor initialized\n");

  // Pin setup
  pinMode(LED_BUILTIN, OUTPUT);

  int result = myFunction(2, 3);

  Serial0.printf("Fuction Test: %d\n", result);
}

void loop() {
  // Status Blinky
  digitalWrite(BUILTIN_LED, !digitalRead(BUILTIN_LED));
  delay(500);
}

int myFunction(int x, int y) {
  return x + y;
}