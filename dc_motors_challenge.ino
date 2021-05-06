// Motor A connections
int enA = 6;
int in1 = 5;
int in2 = 4;


void setup() {
  // Set all the motor control pins to outputs
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  
  // Turn off motors - Initial state
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
}

void loop() {


  analogWrite(enA, 255);

  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  delay(1500);

  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  delay(1500);
  
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  delay(1500);

  digitalWrite(in1, HIGH);
  digitalWrite(in2, HIGH);
  
  
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  
  for (int i = 0; i < 256; i++) {
    analogWrite(enA, i);
    delay(15);
  }
  

  digitalWrite(enA, LOW);

  delay(3750);

  
  
}
