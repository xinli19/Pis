/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 09:48:35 by xili              #+#    #+#             */
/*   Updated: 2023/07/11 13:39:42 by xili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 == *s2)
		{	
			s1++;
			s2++;
		}
		else
		{
			return (*s1 - *s2);
			break ;
		}
	}
		return (*s1- *s2);
}

#include <stdio.h>
int	main()
{
	char	a[4];
	char	b[4];
	char	c[3];
	char	d[3];
	int	r1;
	int r2;
	int r3;

	a[0] = 'a';
	a[1] = 'b';
	a[2] = 'c';

	b[0] = 'a';
	b[1] = 'b';
	b[2] = 'z';

	c[0] = 'a';
	c[1] = 'b';
	
	d[0] = 'a';
	d[1] = 'b';
	
	r1 = ft_strcmp(a, b);
	printf("a is the same length as b, but c < z, so it should be negative.a is less than b: %d \n",r1);
	r2 = ft_strcmp(a, c);
	printf("a is longer than c, so a is greater than c: %d \n",r2);
	ft_strcmp(d, c);
	printf("c and d is the same, so it should return 0");
	return (0);
}
