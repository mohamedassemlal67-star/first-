#include <stdio.h>

int main (void)
{
    printf ("the area = 1 | the perimeter = 2\n");
    int lenght;
    printf ("Enter the lenght of rectengle: ");
    scanf ("%d", &lenght);
    int breadth;
    printf ("Enter the breadth of rectengle: ");
    scanf ("%d", &breadth);

    int choise;
    int result = 0;

    printf ("Enter your choise (1,2): ");
    scanf ("%d",&choise);

    
    if (choise == 1)
    {
        result = lenght*breadth;
        printf ("the area equal %d",result);
    }
    else if (choise == 2)
    {
        result = 2*(lenght + breadth);
        printf ("the perimeter equal %d",result);
    }
    else
    {
        printf ("Invalide choise");
    }
    
}
