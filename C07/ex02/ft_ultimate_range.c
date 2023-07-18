/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:27:28 by xili              #+#    #+#             */
/*   Updated: 2023/07/17 14:44:12 by xili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	i = 0;
	if (min >= max)
		return (0);
	if (range == NULL)
		return (1);
	size = max - min;
	*range = (int *) malloc(size * sizeof(int));
	if (*range == NULL)
		return (0);
	while (min < max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (size);
}
/*
#include <stdio.h>
int main()
{
	int a;
	
	a = 1;
	int *range = &a;
	int **rangeptr = &range;
	int b = ft_ultimate_range(rangeptr,2,5);
	printf( " sizeof range is %d",b);
}
*/
