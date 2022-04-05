## Documentation

here's the link to the videos of my Homework:
- digital input:

https://youtu.be/waVNfd7T6gk

- analog input:

https://youtu.be/62SYCiBDd48

here are the pictures of my circuit:
![IMG_1060](https://user-images.githubusercontent.com/90758768/161716649-50b06520-5121-4ee3-bf56-174688276a07.jpg)

![IMG_1061](https://user-images.githubusercontent.com/90758768/161716674-a92a0f23-ce3f-4233-bed6-b68d12de4e78.jpg)
 ![IMG_1062](https://user-images.githubusercontent.com/90758768/161716680-144c4a91-8b51-4365-9d97-05d92f2aa06e.jpg)
![IMG_1063](https://user-images.githubusercontent.com/90758768/161716687-507c89cb-189e-4cbf-9625-77b5699cf1b6.jpg)



## My expectations

I don't know why but at first I was really intimidated by the assignment requirements, and was afraid to start, because photoresistor is something that
I didn't work with before. But then I realized that since we already worked with the potentiometer, another analog input will also be very similar to that.
Before even starting, I knew that I want to work with the photoresistor, which is why I decided to rewatch the recording of the previous class, and tried
building the circuit myself.

## Process
Trying to build the circuits myself really helped me understand the logic and the connection between all the wires and other elements of Arduino. I think
I understood why and how everything is used and connected between each other. For example, I think I finally got the reason why we actually connect our wire to GND(ground). After looking at different examples of analog and digital input, I decided to work on the traffic light sequence indicators. When the button is pressed, LED lights show how the traffic light works: first, the red light goes off, then it's the yellow light and the last is the green light. I put delay between each LED pins so that there's enough time to process the output.

For the analog input, I decided to play with both LED pin outputs and morse code, so basically what I did was to make the darkness a way to let red LED turn on, while the monitor says that it's too dark outside, and LED lights in a Morse code of "STOP".
In contrast, when photoresistor senses brightness, the green LED lights up, and the serial monitor says that the driver can go ahead, and this is all is when LED lights in a morse code of "GO".

It was a very fun homework to work on.

## Code
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
