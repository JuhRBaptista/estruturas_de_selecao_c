#include <stdio.h>

int main ()
{
  int numero;
  printf ("Insira um número inteiro: ");
  scanf ("%i", &numero);
  if (numero%3 == 0)
  {
    printf ("Esse número é divísivel por 3");
  }
  else
  {
    printf ("Esse número não é divísivel por 3");
  }
  return 0;
}
