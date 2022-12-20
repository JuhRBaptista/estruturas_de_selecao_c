#include <stdio.h>

int main ()
{
  char letra;
  printf ("Insira uma letra, F ou M, para indicar o sexo: ");
  scanf ("%c", &letra);
  if (letra == 'm')
  {
    printf ("O sexo indicado é o másculino");
  }
  else
  {
    if (letra == 'M')
    {
      printf ("O sexo indicado é o másculino");
    }
    else
    {
      if (letra == 'f')
      {
      printf ("O sexo indicado é o feminino");
      }
      else
      {
        if (letra == 'F')
        {
      printf ("O sexo indicado é o feminino");
        }
        else
        {
          printf ("Sexo inválido");
        }
      }
    }
  }
  return 0;
}
