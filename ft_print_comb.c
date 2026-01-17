#include <unistd.h>

void ft_print_comb (void);

void ft_putchar(char c);


int main (void)
{
    ft_print_comb();
}

void ft_putchar(char c)
{
    write(1 ,&c ,1);
}


void ft_print_comb (void)
{
    char a,b,c;
    for(a = '0'; a <= '7'; a++)
    {
        for ( b = 0; b <= '8'; b++)
        {
            for ( c = 0; c < '9'; c++)
            {
                ft_putchar('a');
                ft_putchar('b');
                ft_putchar('c');
                if (!(a == '7' && b == '8' && c == '9'))
                {
                    ft_putchar(',');
                    ft_putchar(' ');
                }
                
            }
            
        }
        
    }

}