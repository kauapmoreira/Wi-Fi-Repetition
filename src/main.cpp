#include <Arduino.h>
int final = 50;
int fase = 1;
void setup()
{
  Serial.begin(115200);
  // exercicio tabuada do 5
  //  for(variavel; condição; incremento)
  //  i++ -===- aumentando de 1 em 1(i = i + 1)
  //  i-- -===- diminui de 1 em 1 (i = i - 1)

  // for (int i = 1; i < 11; i++)
  // {
  //   Serial.print("5 X ");
  //   Serial.print(i);
  //   Serial.print(" = ");
  //   Serial.println(i * 5);
  // }

  // if (final)
  // {
  //   Serial.println("Acabou a tabuada do cinco");
  // }

  // exercicio todas as tabuadas

  // Serial.print("TABUADA DO ");
  // Serial.print(fase);

  // for (int i = 1; i <= 10; i++)
  // {
  //   for (int j = 0; j <= 10; j++)
  //   {
  //     Serial.print(i);
  //     Serial.print(" X ");
  //     Serial.print(j);
  //     Serial.print(" = ");
  //     Serial.println(i * j);
  //   }
  //   Serial.println();
  // }

  // faznedo a mesma coisa porem com o while
  //  int i = 1;

  // while (i < 11)
  // {
  //   Serial.print("5 X ");
  //   Serial.print(i);
  //   Serial.print(" = ");
  //   Serial.println(i * 5);

  //   i++;
  // }

  // int i = 10;
  // int numero;
  // ex1
  //  {
  //    do
  //    {
  //      Serial.println("Digite um numero: ");

  //     while (Serial.available() == 0)
  //     {
  //     }

  //     numero = Serial.parseInt();

  //     Serial.print("Seu numero e: ");
  //     Serial.println(numero);

  //   } while (numero <= 10);

  //   Serial.println("Numero maior que 10!");
  // }
  // ex2
  //  for (int i = 20; i >= 10; i--)
  //  {
  //    Serial.println(i);
  //  }

  // Serial.println("FIM");
  // ex3
  int i = 0;

  while (i <= 11)
  {
    Serial.print(i);

    if (i % 2 == 0)
    {
      Serial.println(" par");
    }
    else
    {
      Serial.println(" impar");
    }

    i++;
  }
}
// usa o for quanto vc for usar uma quantidade de vezes, exemplo contagem de número
// ja o while ele vai ficar comparando até aquele valor ser verdadeiro
// while faz direto
// do while faz e depois veifica
void loop()
{
}
