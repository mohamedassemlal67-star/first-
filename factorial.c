#include <stdio.h>

void FactorialNum (int n)
{
           
    int f = 1;
        
    
    for (int j = 1; j <= n; j++)
    
        {
            f *= j;
        }
        printf ("Factorial of %d \n", f); 

}
    

int main (void)
{
    FactorialNum (5);
}
