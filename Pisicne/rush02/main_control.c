/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_control.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 21:14:19 by xili              #+#    #+#             */
/*   Updated: 2023/07/23 21:30:46 by xili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//main_arg_control(argc,argv)
#include <unistd.h>
#include <
void	main_arg_control(int argc, char **argv, char *dict)
{
	int		key;
// define outside	char	dict[100];

	key = 0;
	if (argc == 3)
	{
		dict = argv[1];
		if (control(argv[2]) == (-1))
			write(2, "Error\n", 7);
		else
			key = control(argv[2]);
	}
	if (argc == 2)
	{
		key = control(argv[1]);
        if (key == (-1))
            write(2, "Error\n", 7);
	}
}
////we should use the dict variable in the open function


int	ft_strlen(char *string)
{
	int	len;

	len = 0;
	while (*string)
	{
		string++;
		len++;
	}
	return (len);
}

void	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}
int	control(char *input)
{
	char	*arg;
	int		int_input;
	int	i;

	int_input = 0;
	i = 0;
	arg = (char *)malloc((ft_strlen(input) + 1) * 1);
	if (arg == NULL)
		return (1);
	ft_strcpy(arg, input);
	while (arg[i])
	{
		if (!(arg[i] >= '0' && arg[i] <= '9'))
			return (-1);
		else
			int_input = int_input * 10 + (arg[i] - '0');
		i++;
	}
	free(arg);
	return (int_input);
}

#include <stdio.h>
int main(int argc, char *argv[])
{
	char *dict = "hello.txt";
	main_arg_control(argc, argv,dict);
	printf("dict is %s",dict);
}

