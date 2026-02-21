#include <unistd.h>

void ft_putnumb (int xy);

int main (void)
{
    ft_putnumb (23);
}

void ft_putchar (char c)
{
    write (1, &c, 1);
}

void ft_put2digits (int n)
{
    ft_putchar((n / 10) + '0');
    ft_putchar((n % 10) + '0');
}

void ft_putnumb (int xy)
{
    ft_put2digits(xy);
}