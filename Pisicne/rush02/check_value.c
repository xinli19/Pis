/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_value.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 14:48:02 by xili              #+#    #+#             */
/*   Updated: 2023/07/23 15:14:55 by xili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	value_check(char *lines, int *lineCount)
{
	int i = 0;
	int j = 0;
	
while (i < *lineCount)
    {
		while (lines[i][j] != '\0')
		{
			if (lines[i][j] < 32 || lines[i][j] > 127)
				return (0);
// skip the white space to the :
			while (lines[i][j] != ':')
			{
				printf("!= ':' and = ' '  lines[i][j] is %c, \n",lines[i][j]);
				j++;
			}
			if (lines[i][j] == ':')
			{				
				printf("now we hit the :");
				j++;
			}
			while (lines[i][j] >= 32 && lines[i][j] < 127)
			{
				if (lines[i] == ' ' && lines[i+1] == ' ')
					j++;
				printf("skip empty space");
				else
				{
					printf( " save the %c\n",lines[i][j]);
					j++;
				}
			}
		}
		i++;
    }
return(0)
}

int main ()
{ 
int	a;
a = 2;
char *lines = {"   7    :      seven \0", "   1   :    8237hasdfe\0"}
int *lineCount = &a;     
value_check(lines,lineCount);
}
