
  int BIG = 11;
 int MID = 12;
  int SMALL = 13;
  const int T_BIG = 3000;
  const int T_MID = 2000;
  const int T_SMALL = 5000;
  const int flash = 500;
  void setup() {
  pinMode(BIG,OUTPUT);
  pinMode(MID,OUTPUT);
  pinMode(SMALL,OUTPUT);
  digitalWrite(BIG,0);
  digitalWrite(MID,0);
  digitalWrite(SMALL,0);
  }
void loop() {
  digitalWrite(SMALL,1);
  delay(T_SMALL);
  for (int i=0 ; i<3 ; i++)
  {
    digitalWrite(SMALL,0);
    delay (flash);
    digitalWrite(SMALL,1);
    delay (flash);
    } 
    digitalWrite(SMALL,0);
    digitalWrite(MID,1);
    delay(T_MID);
    digitalWrite(MID,0);
    digitalWrite(BIG,1);
    delay(T_BIG);
    for (int i=0 ; i<3 ; i++)
  {
    digitalWrite(BIG,0);
    delay (flash);
    digitalWrite(BIG,1);
    delay (flash);
    } 
    digitalWrite(BIG,0);
    digitalWrite(MID,0);
}
