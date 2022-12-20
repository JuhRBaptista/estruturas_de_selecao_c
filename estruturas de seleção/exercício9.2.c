#include <stdio.h> 

int main ()
{
  float pesoNaTerra, pesoNoPlaneta;
  int numeroDoPlaneta;
  printf ("Insira o seu peso, em quilogramas: ");
  scanf ("%f", &pesoNaTerra);
  printf ("\n\n1 - Mercúrio\n2 - Vênus\n3 - Marte\n4 - Júpiter\n5 - Saturno\n6 - Urano");
  printf ("\n\nSelecione o número correspondente ao planeta desejado: ");
  scanf ("%i", &numeroDoPlaneta);
  if (numeroDoPlaneta == 1)
  {
    pesoNoPlaneta = pesoNaTerra*0.37;
    printf ("\n\nO seu peso em Mercúrio é de %f kg.", pesoNoPlaneta);
  }     
  else
  {
    if (numeroDoPlaneta == 2)
    {
    pesoNoPlaneta = pesoNaTerra*0.88;
    printf ("\n\nO seu peso em Vênus é de %f kg.", pesoNoPlaneta);
    }
    else 
    {
      if (numeroDoPlaneta == 3)
      {
        pesoNoPlaneta = pesoNaTerra*0.38;
        printf ("\n\nO seu peso em Marte é de %f kg.", pesoNoPlaneta);
      }
      else
      {
        if (numeroDoPlaneta == 4)
        {
          pesoNoPlaneta = pesoNaTerra*2.64;
          printf ("\n\nO seu peso em Júpiter é de %f kg.", pesoNoPlaneta);
        }
        else
        {
          if (numeroDoPlaneta == 5)
          {
            pesoNoPlaneta = pesoNaTerra*1.15;
            printf ("\n\nO seu peso em Saturno é de %f kg.", pesoNoPlaneta);
          }
          else
          {
            if (numeroDoPlaneta == 6)
            {
              pesoNoPlaneta = pesoNaTerra*1.17;
              printf ("\n\nO seu peso em Urano é de %f kg.", pesoNoPlaneta);
            }
            else 
            {
              printf ("\n\nPlaneta Inválido");
            }
          }
        }
      }
    }
  }
  
  return 0;
}
