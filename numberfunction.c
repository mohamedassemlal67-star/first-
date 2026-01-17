#include <unistd.h>

void ft_number (void);

int main (void)
{
    ft_number ();
}

void ft_number (void)
{
    char n = '0';
    while (n <= '9')
    {
        write (1 ,&n ,1);
        n++;
        
    }
}