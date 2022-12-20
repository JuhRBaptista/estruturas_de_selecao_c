#include <stdio.h>

int main() 
{
  char letra;
  printf("Insira uma letra: ");
  scanf("%c", &letra);
  switch (letra)
  {
  case 'a': printf ("\n\Vogal\n");
    break;
  case 'e': printf ("\n\Vogal\n");
    break;
  case 'i': printf ("\n\Vogal\n");
    break;
  case 'o': printf ("\n\Vogal\n");
    break;
  case 'u': printf ("\n\Vogal\n");
    break;
  case 'A': printf ("\n\Vogal\n");
    break;
  case 'E': printf ("\n\Vogal\n");
    break;
  case 'I': printf ("\n\Vogal\n");
    break;
  case 'O': printf ("\n\Vogal\n");
    break;
  case 'U': printf ("\n\Vogal\n");
    break;
  default: printf ("\nConsoante\n");
  }
  return 0;
}
