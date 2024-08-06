const byte CABIN_LIGHT_PIN = 13;
const byte STORAGE_LIGHT_PIN = 12;
const byte COCKPIT_LIGHT_PIN = 11;
const byte BATHROOM_LIGHT_PIN =10;
const byte BEDROOM_LIGHT_PIN =9;

const byte CABIN_LIGHT_SWITCH_PIN = 6;
const byte STORAGE_LIGHT_SWITCH_PIN = 5;
const byte COCKPIT_LIGHT_SWITCH_PIN = 4;


void setup() {
  // put your setup code here, to run once:
pinMode (CABIN_LIGHT_PIN, OUTPUT);
  pinMode (STORAGE_LIGHT_PIN, OUTPUT);
  pinMode (COCKPIT_LIGHT_PIN, OUTPUT);
  pinMode (BATHROOM_LIGHT_PIN, OUTPUT);
  pinMode (BEDROOM_LIGHT_PIN, OUTPUT);

  pinMode (CABIN_LIGHT_SWITCH_PIN, INPUT);
  pinMode (STORAGE_LIGHT_SWITCH_PIN, INPUT);
  pinMode (COCKPIT_LIGHT_SWITCH_PIN, INPUT);

}
void loop() {
  // put your main code here, to run repeatedly:
if (digitalRead (CABIN_LIGHT_SWITCH_PIN) == HIGH){
    digitalWrite (CABIN_LIGHT_PIN, HIGH);
} else {
    digitalWrite (CABIN_LIGHT_PIN, LOW);
}

if (digitalRead (STORAGE_LIGHT_SWITCH_PIN) == HIGH){
    digitalWrite (STORAGE_LIGHT_PIN, HIGH);
} else {
    digitalWrite (STORAGE_LIGHT_PIN, LOW);
}

if (digitalRead (COCKPIT_LIGHT_SWITCH_PIN) == HIGH){
    digitalWrite (COCKPIT_LIGHT_PIN, HIGH);
} else {
    digitalWrite (COCKPIT_LIGHT_PIN, LOW);
}

if (digitalRead(CABIN_LIGHT_SWITCH_PIN) == HIGH && digitalRead(STORAGE_LIGHT_SWITCH_PIN) == HIGH){
    digitalWrite (BATHROOM_LIGHT_PIN, HIGH);
} else {
    digitalWrite (BATHROOM_LIGHT_PIN, LOW);
}

if (digitalRead (STORAGE_LIGHT_SWITCH_PIN) == HIGH && digitalRead(COCKPIT_LIGHT_SWITCH_PIN) == HIGH){
    digitalWrite (BEDROOM_LIGHT_PIN, HIGH);
} else {
    digitalWrite (BEDROOM_LIGHT_PIN, LOW);
}
}