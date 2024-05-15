// C++ code
//
int valor;
void setup()
{
  Serial.begin(9600); // Necessita disso 
}

void loop()
{
  valor = analogRead(A0); // Ler o valor do pino analógico 
  Serial.print("Valor = "); // serial.print imprime no terminal serial
  Serial.println(valor); // imprime a tensão 
  delay(250);
}