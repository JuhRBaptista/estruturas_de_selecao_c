#include <stdio.h>

int main ()
{
  int idade; 
  printf ("Insira a sua idade: ");
  scanf ("%i", &idade);
  switch (idade)
  {
  case 0: printf ("Não há turmas disponíveis para essa idade");
  break;
  case 1: printf ("Não há turmas disponíveis para essa idade");
  break;
  case 2: printf ("Não há turmas disponíveis para essa idade");
  break;
  case 3: printf ("Não há turmas disponíveis para essa idade");
  break;
  case 4: printf ("Não há turmas disponíveis para essa idade");
  break;
  case 5: printf ("Infantil A");
  break;
  case 6: printf ("Infantil A");
  break;
  case 7: printf ("Infantil A");
  break;
  case 8: printf ("Infantil B");
  break;
  case 9: printf ("Infantil B");
  break;
  case 10: printf ("Infantil B");
  break;
  case 11: printf ("Juvenil A");
  break;
  case 12: printf ("Juvenil A");
  break;
  case 13: printf ("Juvenil A");
  break;
  case 14: printf ("Juvenil B");
  break;
  case 15: printf ("Juvenil B");
  break;
  case 16: printf ("Juvenil B");
  break;
  case 17: printf ("Juvenil B");
  break;
  default: printf ("Adulto");
  }
  return 0;
}
