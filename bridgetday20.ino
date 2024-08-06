#include <Keypad.h>



const byte ROWS = 4;
const byte COLS = 4;
const byte RED_LED = 11;
const byte BLUE_LED = 12;
const byte CLEAR_LED = 13;

const byte ROW_PINS[ROWS] = { 5, 4, 3, 2 };
const byte COL_PINS[COLS] = { 6, 7, 8, 9 };

char BUTTONS[ROWS][COLS] = {
  { '1', '2', '3', 'A' },  // 1st row
  { '4', '5', '6', 'B' },  // 2nd row
  { '7', '8', '9', 'C' },  // 3rd row
  { '*', '0', '#', 'D' }   // 4th row
};

Keypad myAwesomePad = Keypad(makeKeymap(BUTTONS), ROW_PINS, COL_PINS, ROWS, COLS);

void setup(){
pinMode(RED_LED, OUTPUT);
pinMode(BLUE_LED, OUTPUT);
pinMode(CLEAR_LED, OUTPUT);
  
}

void loop(){
 char button_character = myAwesomePad.waitForKey(); 
 
  switch(button_character){
    
    case 1:
    digitalWrite(RED_LED, HIGH);
      
    case 2:
    digitalWrite(BLUE_LED, HIGH);
      
    case 3:
    digitalWrite(CLEAR_LED, HIGH);
  }
}
