/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:37:14 by xili              #+#    #+#             */
/*   Updated: 2023/07/11 14:48:45 by xili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{	
	int	i;
	int j;

	i = 0;
	j = 0;
	while(j < nb)
	{	
		while (dest[i] != '\0'|| src[i] != '\0')
		{
			if (dest[i] != '\0')
			{
				i++;
			}
			else if (src[j] != '\0')
			{
				dest[i] = src[j];
				j++;
			}
		}	
	return (dest);
}
}
#include <stdio.h>
int main()
{
	char src[3];
	char dest[3];
	
	src[0] = 'a';
	src[1] = 'b';
	dest[0] = 'c';
	ft_strncat(dest,src,1);
	printf(" after the function , dest[1] should be a : %c, dest end [2] should be null terminater: %d ", dest[1],dest[2]);
	return (0);
}

