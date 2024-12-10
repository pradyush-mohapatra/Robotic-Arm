 

// Create Servo objects for each finger
Servo thumb;
Servo indexFinger;
Servo middleFinger;
Servo ringFinger;
Servo pinkyFinger;

// Define the pins for each servo
const int thumbPin = 9;
const int indexFingerPin = 10;
const int middleFingerPin = 11;
const int ringFingerPin = 12;
const int pinkyFingerPin = 13;

// Define finger positions
const int openPosition = 0;
const int closedPosition = 90;
const int relaxedPosition = 45;
const int pointingPosition = 30; // Example for pointing gesture

void setup() {
  // Attach each servo to its corresponding pin
  thumb.attach(thumbPin);
  indexFinger.attach(indexFingerPin);
  middleFinger.attach(middleFingerPin);
  ringFinger.attach(ringFingerPin);
  pinkyFinger.attach(pinkyFingerPin);
  
  // Move fingers to initial position
  restPosition();
}

void loop() {
  // Open and close the hand
  openHand();
  delay(1000);
  // closeHand();
  // delay(1000);
  // openHand();
  // delay(1000);
  
  // Squeeze and relax each finger one by one
  squeezeAndRelax();
  delay(1000);
  
  // Show pointing gesture
  pointingGesture();
  delay(1000);
  
  // Close all fingers with a delay
  closeFingersWithDelay();
  delay(1000);
  
  // Return to relaxed position
  restPosition();
  delay(1000);
}

// Function to open the hand
void openHand() {
  thumb.write(openPosition);
  indexFinger.write(openPosition);
  middleFinger.write(openPosition);
  ringFinger.write(openPosition);
  pinkyFinger.write(openPosition);
}

// Function to close the hand
void closeHand() {
  thumb.write(closedPosition);
  indexFinger.write(closedPosition);
  middleFinger.write(closedPosition);
  ringFinger.write(closedPosition);
  pinkyFinger.write(closedPosition);
}

// Function to squeeze and relax each finger one by one
void squeezeAndRelax() {
  thumb.write(closedPosition);
  delay(500);
  thumb.write(relaxedPosition);
  delay(500);
  
  indexFinger.write(closedPosition);
  delay(500);
  indexFinger.write(relaxedPosition);
  delay(500);
  
  middleFinger.write(closedPosition);
  delay(500);
  middleFinger.write(relaxedPosition);
  delay(500);
  
  ringFinger.write(closedPosition);
  delay(500);
  ringFinger.write(relaxedPosition);
  delay(500);
  
  pinkyFinger.write(closedPosition);
  delay(500);
  pinkyFinger.write(relaxedPosition);
  delay(500);
}

// Function for pointing gesture
void pointingGesture() {
  thumb.write(relaxedPosition);
  indexFinger.write(pointingPosition); // Pointing position
  middleFinger.write(openPosition);
  ringFinger.write(openPosition);
  pinkyFinger.write(openPosition);
}

// Function to close all fingers with a delay of 2 seconds between each
void closeFingersWithDelay() {
  thumb.write(closedPosition);
  delay(2000);
  
  indexFinger.write(closedPosition);
  delay(2000);
  
  middleFinger.write(closedPosition);
  delay(2000);
  
  ringFinger.write(closedPosition);
  delay(2000);
  
  pinkyFinger.write(closedPosition);
  delay(2000);
}

// Function to show the middle finger
void showMiddleFinger() {
  thumb.write(closedPosition);
  indexFinger.write(closedPosition);
  middleFinger.write(90); // Position to show the middle finger
  ringFinger.write(closedPosition);
  pinkyFinger.write(closedPosition);
}

// Function to set fingers to resting position
void restPosition() {
  thumb.write(relaxedPosition);
  indexFinger.write(relaxedPosition);
  middleFinger.write(relaxedPosition);
  ringFinger.write(relaxedPosition);
  pinkyFinger.write(relaxedPosition);
}

}