#include <stdio.h>

void Tablemultipl (int n, int range)
{
    for (int i = 1; i <= range; i++)
    {
        
        int m = n * i;
        printf ("%d * %d = %d\n",n ,i ,m);
    }
    
    
}

int main (void)
{
    Tablemultipl (4,10);
}