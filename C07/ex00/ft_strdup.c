/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 10:04:23 by xili              #+#    #+#             */
/*   Updated: 2023/07/17 11:28:35 by xili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;
	int		j;

	j = 0;
	if (*src == 0)
		return (NULL);
	i = ft_strlen(src);
	dup = (char *) malloc (i * sizeof (char));
	if (dup == NULL)
		return (NULL);
	while (src[j] != '\0')
	{
		dup[j] = src[j];
		j++;
	}
	dup[j] = '\0';
	return (dup);
}
/*
#include <stdio.h>
int main ()
{
	char a[4] = {'a','b','c'};
	char *dup = ft_strdup(a);
	while (*dup != 0)
 	{
		printf("duplicated char is %c \n",*dup);
		dup++;
	}
	printf("the string is null terminated , dup[4] = %d \n", dup[4]);
	return (0);
}
*/
