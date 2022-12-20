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
  switch (numeroDoPlaneta)
    {
      case 1: pesoNoPlaneta = pesoNaTerra*0.37;
              printf ("\n\nO seu peso em Mercúrio é de %.2f kg\n\n.", pesoNoPlaneta);
      break;
      case 2: pesoNoPlaneta = pesoNaTerra*0.88;
              printf ("\n\nO seu peso em Vênus é de %.2f kg\n\n.", pesoNoPlaneta);
      break;
      case 3: pesoNoPlaneta = pesoNaTerra*0.38;
              printf ("\n\nO seu peso em Marte é de %.2f kg\n\n", pesoNoPlaneta);
      break;
      case 4: pesoNoPlaneta = pesoNaTerra*2.64;
              printf ("\n\nO seu peso em Júpiter é de %.2f kg.\n\n", pesoNoPlaneta);
      break;
      case 5: pesoNoPlaneta = pesoNaTerra*1.15;
              printf ("\n\nO seu peso em Saturno é de %.2f kg.\n\n", pesoNoPlaneta);
      break;
      case 6: pesoNoPlaneta = pesoNaTerra*1.17;
              printf ("\n\nO seu peso em Urano é de %.2f kg.\n\n", pesoNoPlaneta);
      break;
      default: printf ("\n\nPlaneta invalído.\n\n");
    }
  return 0;
}
