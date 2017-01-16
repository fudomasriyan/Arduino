#define E1 8
#define L1 9
#define L2 10

String inString = "";
unsigned int pwm=0;
void setup()
{
  Serial.begin(9600);
  pinMode(E1, OUTPUT);
  pinMode(L1, OUTPUT);
  pinMode(L2, OUTPUT);
}



void loop()
{
  // Read serial input:
  while (Serial.available() > 0) {
    int inChar = Serial.read();
    //if (isDigit(inChar)) {
      // convert the incoming byte to a char
      // and add it to the string:
      inString += (char)inChar;
    //}
    // if you get a newline, print the string,
    // then the string's value:
    if (inChar == '\n') {
      //Serial.print("pwm:");
      //Serial.println(inString.toInt());
      //Serial.print("String: ");
      //Serial.println(inString);
      pwm = inString.toInt();
      pwm = pwm*4;
      analogWrite(E1, pwm);

      digitalWrite(L1, HIGH);
      digitalWrite(L2, LOW);
      delay(10);
      // clear the string for new input:
      inString = "";
    }
  }
}
