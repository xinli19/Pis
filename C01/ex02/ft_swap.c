/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:11:21 by xili              #+#    #+#             */
/*   Updated: 2023/07/09 20:11:42 by xili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/*
#include <stdio.h>

int	main()
{
	int	a;
	int b;

	a = 2;
	b = 3;
	int *ptr = &a;
	int *ptrr = &b;
    printf("%d,%d\n", a, b);
	ft_swap(ptr,ptrr);
    printf("%d,%d\n", a, b);
	return (0);
}
*/
