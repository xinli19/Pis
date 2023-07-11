/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 13:42:06 by xili              #+#    #+#             */
/*   Updated: 2023/07/11 13:57:23 by xili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{	
	int	i;

	i = 0;
	while ( i < n)
	{
		while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{	
			i++;
		}
		else
		{
			return (s1[i] - s2[i]);
			break ;
		}
	}
		return (0);
}
}
/*

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
	b[1] = 'z';
	b[2] = 'z';

	c[0] = 'a';
	c[1] = 'b';
	
	d[0] = 'a';
	d[1] = 'b';
	
	r1 = ft_strncmp(a, b, 2);
	printf("at index[1], z>b,so a is less than b: %d \n",r1);
	r2 = ft_strncmp(a, c, 2);
	printf("at index[1], b = b, so a the same as c: %d \n",r2);
	r3 = ft_strncmp(d, c, 2);
	printf("c and d is the same, so it should return 0");
	return (0);
}
*/
