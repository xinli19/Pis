/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:47:04 by xili              #+#    #+#             */
/*   Updated: 2023/07/09 21:08:51 by xili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
/*
int	main()
{
    char hello[13];
 
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
	ft_putstr(helloptr);
}
*/
