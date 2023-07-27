/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valuetrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 19:32:39 by xili              #+#    #+#             */
/*   Updated: 2023/07/23 19:32:44 by xili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char *ft_value_trim(char *lines, int *i)
{
	printf("start \n");
	
	char *value_arr;
	
	value_arr = (char *)malloc (1000);	

// skip the white space to the :
	while (lines[*i] != ':')
		(*i)++;
	if (lines[*i] == ':')				
		(*i)++;
	while (lines[*i] == ' ')
	{
		printf("skipping the first parts of spacces\n");
		(*)i++;
	}
	while (lines[*i] != '\0')
	{
		if (lines[(*i) - 1]  != ' ' && lines[(*i) + 1] != ' ' || lines[*i]== ' ' && lines[(*i)] + 1] != ' ' && lines[(*i) + 1] != '\0')
		{
	 		printf( "here is a space ,save the space  %c\n",lines[*i]);
			value_arr[index_i] = lines[*i];
			index_i++;
		}
		else if (lines[*i] >= 32 && lines[*i] < 127 && lines[*i] != ' ')
		{
			printf( " save the %c\n",lines[*i]);
			value_arr[index_i] = lines[*i];
			index_i++;
		}
		else if (lines[*i] == ' ' )
			printf("skip\n");
		else
			printf("not valid");
		(*i)++;		
	}	
	printf("control print the value_arr should be %s\n",value_arr[*i]);
}	
