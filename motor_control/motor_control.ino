// Motor A connections
int motorAPin1 = 2;  // Connect to IN1 on the motor driver
int motorAPin2 = 3;  // Connect to IN2 on the motor driver

// Motor B connections
int motorBPin1 = 4;  // Connect to IN3 on the motor driver
int motorBPin2 = 5;  // Connect to IN4 on the motor driver

void setup() {
  // Set motor control pins as output
  pinMode(motorAPin1, OUTPUT);
  pinMode(motorAPin2, OUTPUT);
  pinMode(motorBPin1, OUTPUT);
  pinMode(motorBPin2, OUTPUT);
}

void loop() {
  // Move both motors forward
  digitalWrite(motorAPin1, HIGH);
  digitalWrite(motorAPin2, LOW);
  analogWrite(motorBPin1, HIGH);  // Set speed for motor B
  analogWrite(motorBPin2, LOW);

  digitalWrite(motorBPin1, HIGH);
  digitalWrite(motorBPin2, LOW);
  analogWrite(motorBPin1, HIGH);  // Set speed for motor B
  analogWrite(motorBPin2, LOW);
}