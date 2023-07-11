/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 17:04:02 by xili              #+#    #+#             */
/*   Updated: 2023/07/10 11:30:22 by xili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <unistd.h>

int	main()
{
	char str[4];
	char des[4];

	str[0] = 'H';
	str[1] = 'e';
	str[2] = 'l';
	des[0] = 'a';
	des[1] = 'b';
	des[2] = 'c';
	write (1, str, 3);
	write (1, des, 1);
	write (1, " ", 1);
	ft_strcpy(des,str);
	write (1, str, 3);
	write (1, des, 3);
	return (0);
}
*/
