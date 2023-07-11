/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 17:16:42 by xili              #+#    #+#             */
/*   Updated: 2023/07/10 12:24:47 by xili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int		i;

	i = 0;
	while (i < n)
	{
		while (src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	char	a[4];
	char	b[6];
	int		n;

	n = 4;

	a[0] = 'a';
	a[1] = 'b';
	a[2] = 'c';
	a[3] = '\0';

	ft_strncpy(b, a, n);
	write (1, b, 5);
	printf ("%d",b[4]);
	return (0); 
}
*/
