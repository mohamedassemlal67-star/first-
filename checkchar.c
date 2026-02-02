#include <stdio.h>

void checkchar (char c)
{
    if (c == 'a' || c == 'e'|| c == 'i'|| c == 'o'|| c == 'u')
    {
        printf ("this char %c is vowel", c);
    }else
    {
        printf ("this char %c is Consonant", c);
    }
    

}

int main (void)
{
    checkchar ('y');
}