int turn_right = 12;
int go_straight = 6;
int turn_left = 9;
int turn_around = 10;

int wall_left = 1;
int wall_right = 3;
int wall_front = 2;

void setup() {
  pinMode(turn_left, OUTPUT);
  pinMode(turn_right, OUTPUT);
  pinMode(go_straight, OUTPUT);
  pinMode(turn_around, OUTPUT);

  pinMode(wall_left, INPUT_PULLUP);
  pinMode(wall_right, INPUT_PULLUP);
  pinMode(wall_front, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(wall_right) == 1){
    digitalWrite(turn_right, HIGH);
  }
  else if (digitalRead(wall_front) == 1){
    digitalWrite(go_straight, HIGH); 
  }
  else if(digitalRead(wall_left) == 1){
    digitalWrite(turn_left, HIGH);
  }
  else {
    digitalWrite(turn_around, HIGH);
  }
  digitalWrite(turn_right, LOW);
  digitalWrite(turn_left, LOW);
  digitalWrite(go_straight, LOW);
  digitalWrite(turn_around, LOW);
}
