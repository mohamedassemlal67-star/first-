#include <stdio.h>

void left_pyramid (void)
{
    int m = 5;
    for (int h = 1; h <= m; h++)// Outer loop to print all rows
    {
       for (int e = 0; e < 2 * h; e++) // First inner loop for printing white spaces
       {
        printf(" ");
       }
        for (int k = 5; k > h; k--)// seconde Inner loop to print the Number in each row
        {
            printf("%d ",k);
        }
        printf("%d\n",h);
    }
}

int main (void)
{
    int n = 7;
    for (int i = 1; i <= n; i++)// Outer loop to print all rows
    {
        for (int j = 7; j > i; j--)// Inner loop to print the Number in each row
        {
            printf("%d ",j);
        }
        
        printf("%d\n",i);
    }
    
}
