#include <unistd.h>

void NumbisneGative (int n);

int main (void)
{
    NumbisneGative(9);
}

void NumbisneGative (int n)
{
    if (n <= 0)
    {
        write(1, "N", 1);
    }
    else if (n > 0)
    {
        write(1, "P", 1);
    }
    else
    {
        write(1 ,"P" , 1);
    }
    
}