void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT); // m1 a
  pinMode(7,OUTPUT);
  pinMode(3, OUTPUT);// m1 b
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);// m1 ENA
  pinMode(6, OUTPUT);
  
 Serial.begin(9600); 
 pinMode(8,INPUT);
 pinMode(9,INPUT);
 pinMode(10,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
/*
Serial.println("eje x: ");
Serial.println(analogRead(A0));
Serial.println("eje x mapeando: ");
Serial.println(map(analogRead(A0),0,1022,0,254));
Serial.println("eje y: ");
Serial.println(analogRead(A1));
Serial.println("eje Y mapeando: ");
Serial.println(map(analogRead(A1),0,1022,0,255));*/
//delay(1000);

while(true){
  int lecturaStickX = max(map(analogRead(A0),0,1022,0,255)-85,0);
  analogWrite(5,lecturaStickX );
  Serial.println("eje x mapeando: ");
  Serial.println(lecturaStickX);
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
}
}
