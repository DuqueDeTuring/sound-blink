const int ledPin =  13; // LED pin
const int diff = 20;    // Variation to detect
const int samples = 70; // how many readings to take
int prevValue = 0;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
}

void loop() {

  long sum = 0;
  for (int i = 0; i < samples; i++)
  {
    sum += analogRead(A0);
  }

  sum = sum / samples;  // average
  if (abs(sum - prevValue) > diff) {
    digitalWrite(ledPin, HIGH);
    delay(5);
  } else {
    digitalWrite(ledPin, LOW);
  }

      Serial.println(sum);
  prevValue = sum;

}
