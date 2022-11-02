int lectura1;
int lectura2;
float voltios1 = 0;
float voltios2 = 0;
float vab = 0;  

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  analogReference(INTERNAL);
}

void loop() {
  // put your main code here, to run repeatedly:
  lectura1=analogRead(A0);
  lectura2=analogRead(A1);
  voltios1=map(lectura1,0,1023,0,11000.0);
  voltios2=map(lectura2,0,1023,0,11000.0);
  voltios1=voltios1/10000.0;
  voltios2=voltios2/10000.0;

  vab=voltios1-voltios2;
  Serial.println(vab,4);
  delay(1000);
}
