
int gap=1000;
int ledState = LOW;

const int beep_pin=9;
const int led_pin_red=13;
const int led_pin_green=12;
const int trigPin = 11;
const int echoPin = 10;
const int btnPin = 8;
float duration, distance;

void risefall()
{
  float rise_fall_time=180;
  int steps=50;
  float f_max=2600;
  float f_min=1000;
  float delay_time=rise_fall_time/steps;
  float step_size=(f_max-f_min)/steps;
  for (float f =f_min;f<f_max;f+=step_size){
    tone(beep_pin,f);
    delay(delay_time);
  }
   for (float f =f_max;f>f_min;f-=step_size){
    tone(beep_pin,f);
    delay(delay_time);
  }
}

void setup() {
  pinMode(beep_pin, OUTPUT);
  pinMode(led_pin_red, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(btnPin, INPUT);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = (duration*.0343)/2;

  if (distance < 10) {
    for (int count=1;count<=10;count++)
    {
      risefall();

      if (ledState == LOW) {
        ledState = HIGH;
      } else {
        ledState = LOW;
      }

      //led
      digitalWrite(led_pin_red, ledState);
    }
    noTone(beep_pin);
    delay(gap);
  }
}
