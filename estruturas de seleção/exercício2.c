#include <stdio.h>

int main() {
  float numero1, numero2;
  printf("Insira um número qualquer: ");
  scanf("%f", &numero1);
  printf("Insira outro número qualquer: ");
  scanf("%f", &numero2);
  if (numero1 == numero2)
  { 
    printf("Você inseriu números iguais");
  }
  else 
  {
    if (numero1 > numero2) 
    {
      printf("O primeiro número inserido é o maior");
    } else 
    {
      printf("O segundo número inserido é o maior");
    }
  }
  return 0;
}
