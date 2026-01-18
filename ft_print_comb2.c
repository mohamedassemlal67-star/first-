#include <unistd.h>

void ft_print_comb2 (void);

void ft_putchar (char c);

void ft_put2digits (int n);

int main (void)
{
    ft_print_comb2();
}

void ft_putchar (char c)
{
    write (1, &c ,1);
}

void ft_put2digits (int n)
{
    ft_putchar((n / 10) + '0');
	ft_putchar((n % 10) + '0');
}

void ft_print_comb2 (void)
{
    int a,b;
    for ( a = 0; a <= 98; a++)
    {
        for ( b = a + 1; b <= 99; b++)
        {
            ft_put2digits(a);
            ft_putchar(' ');
            ft_put2digits(b);
            if (!(a == 98 && b == 99))
            {
                ft_putchar(',');
                ft_putchar(' ');
                ft_putchar(' ');
            }
                    
        }
                
    }
            
}
        
    
