//actualizacion cubo 5x5x5 

int Lpin = 8;
int CLpin = 12;
int Dpin = 11;
int tiempo = 120;
int tiempo2 = 15000;

void setup() {

pinMode (Lpin, OUTPUT);
pinMode (CLpin, OUTPUT);
pinMode (Dpin, OUTPUT);

}

void loop() {

// serpiente//

  for (int i = 0; i <= 5; i++)
  {
  digitalWrite(Lpin, 0);
  shiftOut(Dpin, CLpin, MSBFIRST, 0xFF); //uln2803
  shiftOut(Dpin, CLpin, MSBFIRST, 0xFF);
  shiftOut(Dpin, CLpin, MSBFIRST, 0xFF);
  shiftOut(Dpin, CLpin, MSBFIRST, 0xFF);
  digitalWrite(Lpin,1);
  delay(tiempo2); 

  digitalWrite(Lpin, 0);
  shiftOut(Dpin, CLpin, MSBFIRST, 0); //uln2803
  shiftOut(Dpin, CLpin, MSBFIRST, 0);
  shiftOut(Dpin, CLpin, MSBFIRST, 0);
  shiftOut(Dpin, CLpin, MSBFIRST, 0);
  digitalWrite(Lpin,1);
  delay(tiempo2); 

  
}

}

