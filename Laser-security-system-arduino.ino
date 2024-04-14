int buz = 2;
int LDR = A7; // LDR attached to analog7 [A7]

int value = 0; // varible to store ldr data

void setup() {
  // put your setup code here, to run once:
  pinMode(buz, OUTPUT);

  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  value = analogRead(LDR);
  //  Serial.print("LDR input ");
  //  Serial.println(value);

  value = map(value, 0, 1023, 100, 0); //

  Serial.print(" OUTPUT  ");
  Serial.println(value);


  if ((value >= 10) && (value <= 40)) { // fine tuned for security purposes only trigger by calibrated laser

    digitalWrite(buz, LOW);

  } else {
    digitalWrite(buz, HIGH);
  }


}
