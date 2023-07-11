/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:57:18 by xili              #+#    #+#             */
/*   Updated: 2023/07/11 16:16:40 by xili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (to_find[j] != '\0')
	{
		if (str[i] != to_find[j])
		{
			i++;
			j = 0;
		}
		else
		{
			i++;
			j++;
		}
	}
	if (j > 0)
	{
		return (str[(i-j)]);
	}
	else
	return ('\0');
}
/*
#include <stdio.h>
int main()
{
	char a[7];
	char b[3];
	int	c;

	a[0]= 'a';
	a[1]= 'b';
	a[2] = 'z';
	a[3]= 'b';
	a[4] = 'c';
	a[5]= 'e';
	b[0]='b';
	b[1]= 'c';
	ft_strstr(a,b);
	return (0);
} 
		
*/
