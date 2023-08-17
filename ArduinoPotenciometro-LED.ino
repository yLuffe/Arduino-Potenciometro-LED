const int pin12 = 12;
const int pin11 = 11;
const int pin10 = 10;
const int pin9 = 9;
const int pin8 = 8;
const int pin7 = 7;
const int pin6 = 6;
const int pin5 = 5;

void setup() {
 Serial.begin(9600);
 pinMode(12, OUTPUT);
 pinMode(11, OUTPUT);
 pinMode(10, OUTPUT);
 pinMode(9, OUTPUT);
 pinMode(8, OUTPUT);
 pinMode(7, OUTPUT);
 pinMode(6, OUTPUT);
 pinMode(5, OUTPUT);
  
}



void loop() {
  int valorPotenciometro = analogRead(A0);
  digitalWrite(pin5, valorPotenciometro > 0);
  digitalWrite(pin6, valorPotenciometro > 125);
  digitalWrite(pin7, valorPotenciometro > 125*2);
  digitalWrite(pin8, valorPotenciometro > 125*3);
  digitalWrite(pin9, valorPotenciometro > 125*4);
  digitalWrite(pin10, valorPotenciometro > 125*5);
  digitalWrite(pin11, valorPotenciometro > 125*6);
  digitalWrite(pin12, valorPotenciometro > 125*7);
  
  //Serial.print("Leitura do Potenciometro: ");
  //Serial.println(valorPotenciometro);
  
}