#include <stdio.h>

int main (void)
{
    int n = 6;
    for (int i = 1; i <= n ; i++)
    {  
        for (int k = 0; k < 2 * (n - 1); k++)
        {
            printf(" ");
        }
        
        for (int j = 1; j <= 2 * i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
        
        
    }
    
}