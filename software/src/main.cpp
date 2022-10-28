#include <Arduino.h>
#include <Keypad.h>
#include <Keyboard.h>
#include <usbmidi.h>

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
int a4 = A2;
int a5 = A3;
int a6 = A0;
int a7 = A1;

int v0, v1, v2, v3, v4, v5, v6, v7;
int n0, n1, n2, n3, n4, n5, n6, n7;

void sendCC(uint8_t channel, uint8_t control, uint8_t value) {
  
	USBMIDI.write(0xB0 | (channel & 0xf));
	USBMIDI.write(control & 0x7f);
	USBMIDI.write(value & 0x7f);
  USBMIDI.flush();
}

void checkAndSendValue(int old_analog_value, int new_analog_value, uint8_t control) {
  if(old_analog_value != new_analog_value){
      sendCC(0,control,new_analog_value);
  }
}

void setup() {
  Serial.begin(9600);
  Keyboard.begin();

}

void loop() {
    v0 = analogRead(a0)/8;
    checkAndSendValue(n0, v0, 0);
    n0 = v0;
    v1 = analogRead(a1)/8;
    checkAndSendValue(n1, v1, 1);
    n1 = v1;
    v2 = analogRead(a2)/8;
    checkAndSendValue(n2, v2, 2);
    n2 = v2;
    v3 = analogRead(a3)/8;
    checkAndSendValue(n3, v3, 3);
    n3 = v3;
    v4 = analogRead(a4)/8;
    checkAndSendValue(n4, v4, 4);
    n4 = v4;
    v5 = analogRead(a5)/8;
    checkAndSendValue(n5, v5, 5);
    n5 = v5;
    v6 = analogRead(a6)/8;
    checkAndSendValue(n6, v6, 6);
    n6 = v6;
    v7 = analogRead(a7)/8;
    checkAndSendValue(n7, v7, 7);
    n7 = v7;

  char key = keypad.getKey();

  if (key != NO_KEY){
     Keyboard.write(key);
     Serial.write(key);
     }
}


