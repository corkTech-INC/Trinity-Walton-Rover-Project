
//defines pin numbers
int ENA = 3;
int ENB = 5;

int IN1 = 8;
int IN2 = 9; 
int IN3 = 10;
int IN4 = 11; 

void setup() {

//sets our pins to output
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);


}

void loop() {
//sets the speed of the motor to the MAXXXXX
  analogWrite(ENA, 255);
  analogWrite(ENB, 255);

//gets both motors in the foward moving position
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);


}
