int SER_Pin = 8;   //pin 14 on the 75HC595
int RCLK_Pin = 9;  //pin 12 on the 75HC595
int SRCLK_Pin = 10; //pin 11 on the 75HC595

boolean registers[24];

///////

void setup() {
  pinMode(SER_Pin, OUTPUT);
  pinMode(RCLK_Pin, OUTPUT);
  pinMode(SRCLK_Pin, OUTPUT);

}

float counter = 0;
float dir = 0.5;

void loop() {
  counter = counter + dir;
  if (counter > 100) { dir = -0.5; }
  if (counter < 1) { dir = 0.5; }

  digitalWrite(RCLK_Pin, LOW);
  for (int c = 0; c < 24; c++) {
    digitalWrite(SRCLK_Pin, LOW);
    
      digitalWrite(SER_Pin, LOW);
      //if (c == 0) { digitalWrite(SER_Pin, HIGH); }
      //if (c == 23) {digitalWrite(SER_Pin, HIGH); }
      //c 0, 1, 2, 3, 4, 5, 6 LEVELS
      //c 23 FIRST 22, 21, 20.. 10, 9, 8 LEDS
    if (random(0,100) < counter) { digitalWrite(SER_Pin, HIGH); } 
      else {  digitalWrite(SER_Pin, LOW);}
    digitalWrite(SRCLK_Pin, HIGH);
  }
  digitalWrite(RCLK_Pin, HIGH);

  delay(50);
}