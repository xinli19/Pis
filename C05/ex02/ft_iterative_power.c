/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 12:01:46 by xili              #+#    #+#             */
/*   Updated: 2023/07/13 12:14:35 by xili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_iterative_power(int nb, int power)
{
	int	i;
	int value;

	i = 0;
	value = nb;
	if (power < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		while (i < power)
		{
			value = value * nb;
			i++;
		}
		return (value);
	}
	
}
