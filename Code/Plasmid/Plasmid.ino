#define PIN_RANGE 49

uint8_t pins[PIN_RANGE] = {0};

void setup() {
  // pinMode(LED_BUILTIN, OUTPUT);
  // digitalWrite(LED_BUILTIN, HIGH);

  // Configure all pins as input to test soldering
  for(int i = 0; i < PIN_RANGE; i++) {
    if(i != 21 && ((i > 4 && i < 8) || (i > 10 && i < 14) || (i > 18 && i < 38) || (i > 42 && i < 47))){
      continue;
    }
    pinMode(i, INPUT);
    digitalWrite(i, LOW);
  }

  Serial.begin(9600);
  while(!Serial);
  Serial.println("Serial Monitor Initialized");
}

void loop() {
  // Status Blinky
  // delay(1000);
  // digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN));

  // // Test reading pin 47 and printing it to the Serial Monitor (should alternate with the LED)
  // Serial.print("LED status: ");
  // Serial.print(digitalRead(LED_BUILTIN));
  // Serial.print(" status pin 47: ");
  // Serial.println(digitalRead(LED_BUILTIN));

  // Test input pins
  for(int i = 0; i < PIN_RANGE; i++) {
    if(i != 21 && ((i > 4 && i < 8) || (i > 10 && i < 14) || (i > 18 && i < 38) || (i > 42 && i < 47))){
      continue;
    }
    uint8_t temp = digitalRead(i);
    if(pins[i] != temp) {
      pins[i] = temp;

      Serial.print("Pin ");
      Serial.print(i);
      Serial.print(" changed to ");
      Serial.println(temp);
    }
  }
}
