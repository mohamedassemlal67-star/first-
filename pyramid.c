#include <stdio.h>

int main (void)
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 2; k < 2 * (n - i + 1) ; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j );
        }
        printf("\n ");
        
    }
       
}