#include <stdio.h>

int main ()
{
  int numero;
  printf ("Insira um número inteiro: ");
  scanf ("%i", &numero);
  if (numero%2 == 0)
  {
    printf ("Esse número é par");
  }
  else
  {
    printf ("Esse número é ímpar");
  }
  return 0;
}
