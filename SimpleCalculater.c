#include <stdio.h>

int main (void)
{
    int firstnum;
    printf("Enter your firstnum: ");
    scanf ("%d", &firstnum);
    int scondenum;
    printf("Enter your scondenum: ");
    scanf ("%d", &scondenum);
    int op;
    printf("Enter your operarion (1 = + / 2 = - / 3 = * / 4 = /): ");
    scanf ("%d", &op);

    if (op == 1)
    {
        int result = firstnum + scondenum;
        printf("the result equal %d", result);
    }
     else if (op == 2)
    {
        int result = firstnum - scondenum;
        printf("the result equal %d", result);
    }
     else if (op == 3)
    {
        int result = firstnum * scondenum;
        printf("the result equal %d", result);
    }
     else if (op == 4)
    {
        int result = firstnum / scondenum;
        printf("the result equal %d", result);
    }
    else
    {
        printf("Invalide operation");
    }
    
}