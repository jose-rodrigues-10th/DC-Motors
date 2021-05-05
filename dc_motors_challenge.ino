// Motor A connections
int enA = 9;
int in1 = 8;
int in2 = 7;


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
  delay(2000);

  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  delay(2000);
  
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  delay(2000);

  digitalWrite(in1, HIGH);
  digitalWrite(in2, HIGH);
  
  
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  
  for (int i = 0; i < 256; i++) {
    analogWrite(enA, i);
    delay(20);
  }
  

  digitalWrite(enA, LOW);

  delay(5000);

  
  
}
