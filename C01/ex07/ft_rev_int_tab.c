/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:03:36 by xili              #+#    #+#             */
/*   Updated: 2023/07/09 21:28:18 by xili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	temp;

	index = 0;
	while (index < size)
	{
		temp = tab[index];
		tab[index] = tab[size - 1];
		tab[size - 1] = temp;
		index++;
		size--;
	}
}
/*
#include <stdio.h>

int main()
{
    int numbers[5];
	int	i;

    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;
    int* ptrn = numbers;
	ft_rev_int_tab(numbers,5);
	for (i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }
}
*/
