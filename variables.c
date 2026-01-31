#include <stdio.h>

int main (void)
{
    int num;

    printf ("enter a number : ");
    scanf ("%d", &num);

    if (!(num % 1 == num && num % 1 == 0))
    {
        printf ("this number %d is P", num);
    }
    else
    {
        printf ("this number %d is N", num);
    }
}