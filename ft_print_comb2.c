#include <unistd.h>

void ft_print_comb2 (void);

int main (void)
{
    ft_print_comb2();
}

void ft_putchar (char c)
{
    write (1, &c ,1);
}

void ft_print_comb2 (void)
{
    char a,b,c,d;
    for ( a = '0'; a <= '0'; a++)
    {
        for ( b = a + 1; b <= '8'; b++)
        {
            for ( c = b + 1; c <= '9'; c++)
            {
                for ( d = c + 1; d <= '9'; d++)
                {
                    ft_putchar(a);
                    ft_putchar(b);
                    ft_putchar(' ');
                    ft_putchar(c);
                    ft_putchar(d);
                    if (!(a == '0' && b == '8' && c == '9' && d == '9'))
                    {
                        ft_putchar(',');
                        ft_putchar(' ');
                        ft_putchar(' ');
                    }
                    
                }
                
            }
            
        }
        
    }
    
}