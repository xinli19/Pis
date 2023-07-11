/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:35:09 by xili              #+#    #+#             */
/*   Updated: 2023/07/09 21:17:36 by xili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	i;
	int	sum;

	i = 0;
	sum = 0;
	while (str[i] != '\0')
	{
		i++;
		sum++;
	}
	return (sum);
}
/*
#include <stdio.h>

int main ()
{
	char hello[14];
    
    hello[0] = 'H';
    hello[1] = 'e';
    hello[2] = 'l';
    hello[3] = 'l';
    hello[4] = 'o';
    hello[5] = ',';
    hello[6] = ' ';
    hello[7] = 'W';
    hello[8] = 'o';
    hello[9] = 'r';
    hello[10] = 'l';
    hello[11] = 'd';
    hello[12] = '!';
    hello[13] = '\0';

	char *helloptr = hello;
	ft_strlen(helloptr);
    
}
*/
