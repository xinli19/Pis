/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:23:29 by xili              #+#    #+#             */
/*   Updated: 2023/07/13 22:14:46 by xili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb)
{
	char narr[12];
	int	i;
	long long	tempn;
	if (nb == 0)
	{
		write(1, "0", 1)
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	i = 0;
	if (nb > 0)
	{	
		while (nb >= 0)
		{
			nb = nb % 10;
			narr[i] = nb % 10  - '0';
			i++;
		}
	}
	narr[i] = nb - '0';
	*ptr_i = &i;
	reverse_narr(narr[]
	reverse_narr(narr[],,
}
void reverse_narr(int *narr, int *i)
{
	while (*i > 0)
	{	
		*i--;
		write (1, narr[*i],1);
	}
}

	
