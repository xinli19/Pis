/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:00:10 by xili              #+#    #+#             */
/*   Updated: 2023/07/11 14:23:54 by xili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcat(char *dest, char *src)
{
	while (*dest != '\0'|| *src != '\0')
	{
		if (*dest != '\0')
		{
			dest++;
		}
		if (*src != '\0')
		{
			*dest = *src;
			dest++;
			src++;
		}
	}
	return (dest);
}
#include <stdio.h>
int main()
{
	char src[3];
	char dest[4];
	
	src[0] = 'a';
	src[1] = 'b';
	dest[0] = 'c';
	ft_strcat(dest,src);
	printf(" after the function , dest[1] should be 'a' : %c, dest end [4] should be null terminater: %d ", dest[1],dest[4]);
	return (0);
}
