
int buttonValue = 0;
int photoValue = 0;
const int LED_PIN = 7;
const int LED_PIN_TWO = 9;
const int LED_PIN_THREE = 12;
const int BUTTON_PIN = 3;
const int PHOTO_PIN = A0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
  pinMode(LED_PIN_TWO, OUTPUT);
  pinMode(LED_PIN_THREE, OUTPUT);
  pinMode(BUTTON_PIN, INPUT);
  pinMode(PHOTO_PIN, INPUT);
}

void loop() {

  buttonValue = digitalRead(BUTTON_PIN);
  if (buttonValue == HIGH) {
    Serial.println("Learn Traffic Light Sequence For Your Safety!");
    digitalWrite(LED_PIN_THREE, HIGH);
    delay(250);
    digitalWrite(LED_PIN_TWO, HIGH);
    delay(250);
    digitalWrite(LED_PIN, HIGH);
  }
  else {
    digitalWrite(LED_PIN, LOW);
    digitalWrite(LED_PIN_TWO, LOW);
    digitalWrite(LED_PIN_THREE, LOW);
  }

  photoValue = analogRead(PHOTO_PIN);
  if (photoValue <= 300) {
    //morse code for "GO":
    //morse code for "G" is --.
    digitalWrite(LED_PIN, HIGH);
    delay(600);
    digitalWrite(LED_PIN, LOW);
    delay(50);
    digitalWrite(LED_PIN, HIGH);
    delay(600);
    digitalWrite(LED_PIN, LOW);
    delay(50);
    digitalWrite(LED_PIN, HIGH);
    delay(250);
    digitalWrite(LED_PIN, LOW);
    delay(500);
    //morse code for "O" is ---
    digitalWrite(LED_PIN, HIGH);
    delay(600);
    digitalWrite(LED_PIN, LOW);
    delay(50);
    digitalWrite(LED_PIN, HIGH);
    delay(600);
    digitalWrite(LED_PIN, LOW);
    delay(50);
    digitalWrite(LED_PIN, HIGH);
    delay(600);
    digitalWrite(LED_PIN, LOW);
    delay(50);

    digitalWrite(LED_PIN, LOW);
    Serial.println("It's bright enough, you can drive");
  }
  else {
    //morse code for "STOP":
    //morse code for "S"
    digitalWrite(LED_PIN_THREE, HIGH);
    delay(250);
    digitalWrite(LED_PIN_THREE, LOW);
    delay(50);
    digitalWrite(LED_PIN_THREE, HIGH);
    delay(250);
    digitalWrite(LED_PIN_THREE, LOW);
    delay(50);
    digitalWrite(LED_PIN_THREE, HIGH);
    delay(250);
    digitalWrite(LED_PIN_THREE, LOW);
    delay(50);
    //morse code for "T"
    digitalWrite(LED_PIN_THREE, HIGH);
    delay(600);
    digitalWrite(LED_PIN_THREE, LOW);
    delay(50);
    //morse code for "O"
    digitalWrite(LED_PIN_THREE, HIGH);
    delay(600);
    digitalWrite(LED_PIN_THREE, LOW);
    delay(50);
    digitalWrite(LED_PIN_THREE, HIGH);
    delay(600);
    digitalWrite(LED_PIN_THREE, LOW);
    delay(50);
    digitalWrite(LED_PIN_THREE, HIGH);
    delay(600);
    digitalWrite(LED_PIN_THREE, LOW);
    delay(50);
    //morse code for "P"
    digitalWrite(LED_PIN_THREE, HIGH);
    delay(250);
    digitalWrite(LED_PIN_THREE, HIGH);
    delay(600);
    digitalWrite(LED_PIN_THREE, HIGH);
    delay(600);
    digitalWrite(LED_PIN_THREE, HIGH);
    delay(250);
    Serial.println("It's dark outside, you can't drive, STOP");
  }



}
