#include <unistd.h>
#include <stdio.h>

void ft_print_reverce_alphabet(void);

int main(void)
{
    ft_print_reverce_alphabet();
}

void ft_print_reverce_alphabet(void)
{
    char letter;
    for(letter = 'z'; letter >= 'a';letter--)
    {
        write(1, &letter, 1);
    }
    
    
}