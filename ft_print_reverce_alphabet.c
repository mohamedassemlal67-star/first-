#include <unistd.h>
#include <stdio.h>

void ft_print_reverce_alphbet(void);

int main(void)
{
    ft_print_reverce_alphbet();
}

void ft_print_reverce_alphabet(void)
{
    char letter = 'z';
    while (letter >= 'a')
    {
        write(1, &letter, 1);
        letter--;
    }
    
}