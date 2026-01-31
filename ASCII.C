#include <stdio.h>

int main (void)

{
    char charater;
    printf ("Enter your character choice : ");
    scanf ("%c", &charater);

    printf ("the ASCII value of this character %c is %d ", charater, charater);

    return 0;
}