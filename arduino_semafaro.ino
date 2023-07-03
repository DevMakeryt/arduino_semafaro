#define VERDE 11
#define AMARELO 12
#define VERMELHO 13

void setup()
{
  pinMode(VERDE, OUTPUT);
  pinMode(AMARELO, OUTPUT);
  pinMode(VERMELHO, OUTPUT);
}

void loop()
{
  digitalWrite(VERDE, HIGH);
  digitalWrite(VERMELHO, LOW);
  digitalWrite(AMARELO, LOW);
  delay(1000);
  digitalWrite(VERDE, LOW);
  digitalWrite(VERMELHO, LOW);
  digitalWrite(AMARELO, HIGH);
  delay(1000);
  digitalWrite(VERDE, LOW);
  digitalWrite(VERMELHO, HIGH);
  digitalWrite(AMARELO, LOW);
  delay(1000);
}