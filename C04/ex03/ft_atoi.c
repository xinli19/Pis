/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */

/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 10:23:20 by xili              #+#    #+#             */
/*   Updated: 2023/07/12 12:48:05 by xili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int h;

	i = 1;
	result = 0;
	
	while (*str == 32 || (*str >= 9 && *str <= 13))
	str++;
	while (*str == '+' || *str == '-')
		{
		if (*str == '-')
			i = -i;
		str++;
		}
		while (*str >= 48 && *str <= 57)		
		{	
			result = result * 10 + (*str - '0');
			printf("result = %d \n",result);
			str++;
		}
h = i*result;
printf("result is %d",h);
return (i * result);	
}
	


int	main(void)
{
	char a[] = {'-','-','-','+','-','-','+','1','2','3','4','a','b','5','6','7'};
	ft_atoi(a);
	return (0);
}
/*
1.
declare an int string to take in the converted number
the int string size should be -2,147,483,648 to 2,147,483,647 which is 12

1.
declare and initiate a counter i for the looping the str.

1.declare and initiate a counter h for tracking the odd and even of '-',
2.
1.outer while loop:
general stopping point : read the str until null;
3,
	condition 1: if (str[i] = whitespace)
				skip, go to the next index.
!diff between whitespace and null terminator
	condition 2: if (str[i] = -/+)
	if + skip +, go to the next index.
	if -, count the number of -, and save it into (number),
if (str[i] = ascii of number)
		while (str[i] == ascii value of the num )
			convert and put the num char into the num array
				n_arr[j] = str[i] - '0';
!!rechek the way of conversion
			create a counter j for the int arr, j=0;
	
			loop the while to do the next task
				j++
when this is not ture, 
we stop the program
convert the intarr into number.
actually, j is the indext of last number
if j < 10 , result = 1, result =j;
if j > 10,  while j > 0 , result = result + j*10
let's check the number of h is even or odd and display '-'
			if even, result will be positive
			if odd, add '-' and result will be negative.
print out the number;
*/
