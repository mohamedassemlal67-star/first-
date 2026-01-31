#include <stdio.h>

int main (void)
{
    int num1;
    int num2;
    char op;
    printf ("enter a number : ");
    scanf ("%d",&num1);
    printf ("enter a number : ");
    scanf ("%d",&num2);
    printf ("enter your oprator :");
    scanf (" %c", &op);

    double result;

    if (op == '+')
    {
        result = num1 + num2;
        printf ("the result is %lf", result);
    }
    else if (op == '-')
    {
        result = num1 - num2;
        printf ("the result is %lf", result);
    }
    else if (op == '*')
    {
        result = num1 * num2;
        printf ("the result is %lf", result);
    }
    else if (op == '/')
    {
        result = num1 / num2;
        printf ("the result is %lf", result);
    }
    else
    {
        printf ("Invalide input");
    }
    
    

}