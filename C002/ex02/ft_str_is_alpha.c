/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 18:15:04 by xili              #+#    #+#             */
/*   Updated: 2023/07/10 12:46:19 by xili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_alpha(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65 && str[i] <= 90))
		{
			i++;
		}
		else
		{
			return (1);
		}
		return (0);
	}
}
/*
#include <stdio.h>
printf("1");
printf("0\n");

int	main(void)
{
	char a[3];
	char b[3];

	a[0] = 'a';
	a[1] = 'b';
	a[2] = 'c';
	b[0] = '1';
	b[1] = 'a';
	b[2] = '?';
	ft_str_is_alpha(a);
	ft_str_is_alpha(b);
	return (0);
}
*/
