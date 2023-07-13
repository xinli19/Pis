/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 10:22:32 by xili              #+#    #+#             */
/*   Updated: 2023/07/13 11:51:52 by xili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;
	
	result = nb;
	if (nb < 1)
		return (0);
	else
	{
		if (n == 1)
			return (result);
		else
			return result = result * ft_recursive_factorial(nb - 1);
	}
