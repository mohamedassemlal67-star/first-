#include <stdio.h>

int main (void)
{
    int Tf;
    printf ("Enter the number of the temperature : ");
    scanf ("%d", &Tf);

    int Tc = (Tf - 32) * 5/9;

    printf ("the temperatur by C is (%dc)", Tc);

}