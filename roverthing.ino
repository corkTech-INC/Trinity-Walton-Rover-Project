
//defines pin numbers
int ENA = ;
int ENB = ;

int IN1 = ;
int IN2 = ; 
int IN3 = ;
int IN4 = ; 



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
  analogwrite(ENA, 255);
  analogwrite(ENB, 255);

//gets both motors in the foward moving position
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);


}
