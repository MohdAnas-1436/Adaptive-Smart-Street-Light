// Define Pins
const int ldrPin = A0;      // Photoresistor
const int pirSensor1 = 2;   // PIR 1 (simulating car at Zone 1)
const int pirSensor2 = 3;   // PIR 2 (simulating car at Zone 2)
const int led1 = 5;         // Street light 1 (PWM pin)
const int led2 = 6;         // Street light 2 (PWM pin)

// Variables
int ldrValue = 0;
int threshold = 400;        // Daylight threshold for Wokwi
int dimBrightness = 38;     // ~15% brightness
int fullBrightness = 255;   // 100% brightness

void setup() {
  pinMode(ldrPin, INPUT);
  pinMode(pirSensor1, INPUT);
  pinMode(pirSensor2, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  ldrValue = analogRead(ldrPin);
  int carAtZone1 = digitalRead(pirSensor1); 
  int carAtZone2 = digitalRead(pirSensor2);

  // Nighttime logic (LDR reads low in the dark in Wokwi)
  if (ldrValue < threshold) { 
    
    // Zone 1
    if (carAtZone1 == HIGH) { // PIR detects motion
      analogWrite(led1, fullBrightness); 
    } else {
      analogWrite(led1, dimBrightness);  
    }

    // Zone 2
    if (carAtZone2 == HIGH) {
      analogWrite(led2, fullBrightness); 
    } else {
      analogWrite(led2, dimBrightness);  
    }
    
  } 
  // Daytime logic
  else { 
    analogWrite(led1, 0); 
    analogWrite(led2, 0);
  }
  
  delay(100); 
}
