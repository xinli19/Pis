/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 11:34:21 by xili              #+#    #+#             */
/*   Updated: 2023/07/17 12:22:17 by xili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
int	*ft_range(int min, int max)
{

	int	*range;
	int	 i;

	i = 0;
	if (min >= max)
		return (NULL);
	range = (int*) malloc((max - min)*sizeof(int));
	if (range == NULL)
		printf("false initialization");
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;	
	}
	return (&range[0]);
}
int main()
{
	int *result= ft_range(0,10);
	printf("result[ min] is %d, result [max] is %d",result[0], result[(9)]);
	return (0);
}

