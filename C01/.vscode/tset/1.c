#include <stdio.h>

void ft_ft(int *nbr)
{
    *nbr = 42;
    printf("Address of nbr: %p\n", (void *)&nbr);
}

int main()
{
    int number = 0;
    printf("Initial value of number: %d\n", number);
    printf("Address of number: %p\n", (void *)&number);

    ft_ft(&number);

    printf("Updated value of number: %d\n", number);

    return 0;
}