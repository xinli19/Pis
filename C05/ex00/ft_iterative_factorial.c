/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 09:48:48 by xili              #+#    #+#             */
/*   Updated: 2023/07/13 10:17:59 by xili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

//check whether the argument is not valid
	if (nb < 1)
		return (0);
//logic
	result = nb;
	while (nb > 1 )
//result * 0 is false, so nb-1 > 0, nb >0;
	{
	result = result * (nb-1);
	nb--;
	}
	return (result);
}
