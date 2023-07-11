/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:19:49 by xili              #+#    #+#             */
/*   Updated: 2023/07/09 20:28:44 by xili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
int	main()
{
	int a;
	int b;
	int c;
	int d;

	a = 14;
	b = 5;
	c = 100;
	d = 200;
	int	*ptrc = &c;
	int	*ptrd = &d;
	printf("%p, %p\n", ptrc, ptrd);
	printf("%d, %d\n", *ptrc, *ptrd);
	ft_div_mod(a, b, ptrc, ptrd);
	printf("%p, %p\n", ptrc, ptrd);
	printf("%d, %d\n", *ptrc, *ptrd);
   return (0);
}
*/
