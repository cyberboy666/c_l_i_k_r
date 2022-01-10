#include <Arduino.h>
#include <Keypad.h>

const byte ROWS = 4; //five rows
const byte COLS = 5; //four columns
char keys[ROWS][COLS] = {
  {'a', 'b', 'c', 'd', 'x'},
  {'e', 'f', 'g', 'h', 'i'},
  {'j', 'k', 'l', 'm', 'n'},
  {'o', 'p', 'q', 'r', 's'}
};
byte rowPins[ROWS] = {5, 7, 16, 14}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {1, 0, 2, 3, 4}; //connect to the column pinouts of the keypad

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

int a0 = A7;
int a1 = A8;
int a2 = A9;
int a3 = A10;
int a4 = A0;
int a5 = A1;
int a6 = A2;
int a7 = A3;

int v0, v1, v2, v3, v4, v5, v6, v7;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  char key = keypad.getKey();



  if (key != NO_KEY){
    v0 = analogRead(a0);
    v1 = analogRead(a1);
    v2 = analogRead(a2);
    v3 = analogRead(a3);
    v4 = analogRead(a4);
    v5 = analogRead(a5);
    v6 = analogRead(a6);
    v7 = analogRead(a7);

    Serial.println(key);
    Serial.println(v0);
    Serial.println(v1);
    Serial.println(v2);
    Serial.println(v3);
    Serial.println(v4);
    Serial.println(v5);
    Serial.println(v6);
    Serial.println(v7);
  }
}