#include <stdio.h>

int main ()
{
    float numeroInteiro;
    printf ("Insira um número inteiro");
    scanf ("%f", &numeroInteiro);
    if (numeroInteiro =0)
    {
        printf ("Esse número tem valor nulo");
    }
    else 
    {
        if (numeroInteiro > 0)
        {
            printf ("Esse número é positivo");
        }
        else (numeroInteiro < 0);
        {
            printf ("Esse número é negativo");
        }
    }
    return 0;
}