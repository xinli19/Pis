/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:11:47 by xili              #+#    #+#             */
/*   Updated: 2023/07/17 17:27:52 by xili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
 
int ft_strlen(int size, char **strs)
{
	int	i;
	int j;
	int num;
	
	num = 0;
	i = 0;
	j = 0;
	while (i <= size)
	{
		while(strs[i][j] != '\0')
		{
			num++;
			j++;
			printf("within j: number is %d\n",num); 
		}
		j = 0;
		i++;
		num++;
		printf("within i: number is %d \n",num);
	}
	printf("final number is %d \n",num);
	return (num);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		j;
	int		num;
	num = ft_strlen(size, strs);
	result = (char*) malloc(num * sizeof(char));
	while (i < size)
	{
		while(strs[i][j] != '\0')
		{
			*result = strs[i][j];
			printf("with in j: result = (%c)\n",*result);
			result++;
			j++;
			
		}
		while(*sep != 0)
		{
			*result = *sep;
			printf("add sep : result = (%c) \n",*result);
			result++;
			sep++;
		}
		j = 0;
		printf("j limit reached !\n");
		i++;
		
	}
	return (result);
}

int	main()
{
	char *str[] = {"hello", "world","openai"};
	char *ptr = **str;
	char sep[3] = {'a','b'};
	
	ft_strjoin(3,ptr,sep);
}
