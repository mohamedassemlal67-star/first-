#include <stdio.h>

void SingOfNum (int n)
{
    if (n > 0)
    {
        printf ("this number %d is Positive", n);
    }
    else if (n == 0)
    {
        printf ("this number is %d is null", n);
    }
    else
    {
        printf ("this number %d is Negative", n);

    }
    
}

int main (void)
{
    SingOfNum (-90);
}