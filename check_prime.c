#include <stdio.h>

int CheckPrime (int n);

int main (void)
{
    if (CheckPrime(7))
    {
        printf("Prime");
    }
    else
    {
        printf("Notprime");
    }
    
}

int CheckPrime (int n)
{   
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
        
    }
    return 1;
    
}
