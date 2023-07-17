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
#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range,int min, int max)
{
	int i;
	

	i = 0;
	if (min >= max)
		return (0);
	if (range == NULL)
		return (1);
	*range = (int*) malloc((max-min)*sizeof(int));
	if (*range == NULL)
		printf("failed malloc");
	while(min < max)
	{
		(*range)[i] = min;
		printf("range[i] = %d, min  = %d",(*range)[i],min);
		i++;
		min++;
	}
		return (sizeof(**range));
	
}

int main()
{
	int a;
	
	a = 1;
	int *range = &a;
	int **rangeptr = &range;
	int b = ft_ultimate_range(rangeptr,2,5);
	printf( " sizeof range is %d",b);
}
