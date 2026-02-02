#include <stdio.h>

int max (void)
{
    int a,b,c;
    
    printf ("enter a number: \n");
    scanf ("%d",&a);
    printf ("enter a number: \n");
    scanf ("%d",&b);
    printf ("enter a number: \n");
    scanf ("%d",&c);

    if (a > b && a > c)
    {
        printf ("the largest number is %d", a);
    }
    else if (b > a && b > c)
    {
        printf ("the largest number is %d", b);
    }
    else if (c > b && c > a)
    {
        printf ("the largest number is %d", c);
    }
    else
    {
        printf ("Invalide Input");
    }
    

}

int main (void)
{
    max ();
}