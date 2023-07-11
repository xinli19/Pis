/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:25:23 by xili              #+#    #+#             */
/*   Updated: 2023/07/09 20:46:30 by xili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		value_a;
	int		value_b;

	value_a = *a;
	value_b = *b;
	*a = value_a / value_b;
	*b = value_a % value_b;
}
/*

#include <stdio.h>

int	main()
{
	int a;
	int	b;

	a = 12;
	b = 5;
	int *ptra = &a;
	int *ptrb = &b;
	ft_ultimate_div_mod(ptra,ptrb);
	printf ("%d,%d",*ptra,*ptrb);
}
*/
