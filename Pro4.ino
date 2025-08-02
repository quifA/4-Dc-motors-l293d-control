int in1 = 5;    
int in2 = 6;
int in3 = 9;    
int in4 = 11;
int en1 = 10;
int en2 = 2;


int in5 = 3;    
int in6 = 4;
int in7 = 7;    
int in8 = 8;
int en3 = 12;
int en4 = 13;

void setup() {
  pinMode(in1, OUTPUT); pinMode(in2, OUTPUT); pinMode(en1, OUTPUT);
  pinMode(in3, OUTPUT); pinMode(in4, OUTPUT); pinMode(en2, OUTPUT);
  pinMode(in5, OUTPUT); pinMode(in6, OUTPUT); pinMode(en3, OUTPUT);
  pinMode(in7, OUTPUT); pinMode(in8, OUTPUT); pinMode(en4, OUTPUT);
}


void driveAll(int m1a, int m1b, int m2a, int m2b, int m3a, int m3b, int m4a, int m4b, int speed = 200) {
  digitalWrite(in1, m1a); digitalWrite(in2, m1b); analogWrite(en1, speed);
  digitalWrite(in3, m2a); digitalWrite(in4, m2b); analogWrite(en2, speed);
  digitalWrite(in5, m3a); digitalWrite(in6, m3b); analogWrite(en3, speed);
  digitalWrite(in7, m4a); digitalWrite(in8, m4b); analogWrite(en4, speed);
}

void stopAll() {
  analogWrite(en1, 0);
  analogWrite(en2, 0);
  analogWrite(en3, 0);
  analogWrite(en4, 0);
}

void loop() {
  
  driveAll(HIGH, LOW, HIGH, LOW, HIGH, LOW, HIGH, LOW);
  delay(30000); 

  
  driveAll(LOW, HIGH, LOW, HIGH, LOW, HIGH, LOW, HIGH);
  delay(60000); 

  
  for (int i = 0; i < 6; i++) {
  
    driveAll(HIGH, LOW, LOW, HIGH, HIGH, LOW, LOW, HIGH);
    delay(5000);

    
    driveAll(LOW, HIGH, HIGH, LOW, LOW, HIGH, HIGH, LOW);
    delay(5000);
  }

  stopAll();
  while (true); 
}