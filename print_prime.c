#include <stdio.h>

void isPrime (void)
{
    int num;
    for (int i = 2; i <= num * num; i++)
    {
        if (num % i == 0)
        {
            return 1;
        }
        return 0;
        
    }
    
}

int main (void)
{
    int n = 50;
    for ( int i = 1; i <= n; i++)
    {
        if (isPrime(i))
        {
            printf("%d", i);
        }
        return 0;
        
    }
    
}