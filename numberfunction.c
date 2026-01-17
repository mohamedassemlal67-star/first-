#include <unistd.h>
#include <stdio.h>

void ft_number(void);

int main(void)
{
    ft_number();
}

void ft_number(void)
{
    int n = 0;
    while(n <= 10)
    {
        write(1 ,&n ,1);
        n++;
    }
}