#include <stdio.h>

int main ()
{
  int numero;
  printf ("Insira um número inteiro: ");
  scanf ("%i", &numero);
  if ((numero > 0) && (numero < 100))
  {
    printf ("Esse número é maior que 0 e menor que 100.");
  }
  else
  {
    if (numero >= 100)
    {
    printf ("Esse número é igual ou maior que 100");
    }
    else 
    {
    printf ("Esse número é igual ou menor a 0");
    }
    
  }
  return 0;
}
