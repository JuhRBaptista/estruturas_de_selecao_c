#include <stdio.h>

int main ()
{
  int salarioBruto, valorDaPrestação;
  printf ("Insira seu salário bruto: ");
  scanf ("%i", &salarioBruto);
  printf ("Insira o valor da prestação: ");
  scanf ("%i", &valorDaPrestação);
  if (valorDaPrestação <= 30*salarioBruto/100)
  {
    printf ("O empréstimo pode ser concedido.");
  }
  else
  {
    printf ("O empréstimo não pode ser concedido.");
  }
  return 0;
}
