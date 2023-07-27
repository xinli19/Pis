long long	ft_atoi(char *num_arr)
{
	int		i;
	long long	result;
	
	result = 0;
	i = 0;	

//error check: should begins with number
	if (num_arr[i] < '0' && num_arr[i] > '9' )
		return (-1);
// number
	while (num_arr[i] >= '0' && num_arr[i] <= '9')
	{
		result = result * 10 + (num_arr[i] - '0');
		i++;
	}
// space
	while (num_arr[i] == ' ')
// Xin ??? arr[i] == '\n' || arr[i] == '\t' || arr[i] == '\v' || arr[i] == '\f' || arr[i] == '\r' || arr[i] == ' '
		i++;
// stop at :
	if (num_arr[i] != ':')
		return (-1);

// match with value check
	if (check_value_part(&num_arr[i + 1]) == 0)
		return (-1);
// control check
	printf("num_arr[i] is: %c\n", num_arr[i]);
	printf("atoi control :%lld", result);
	return (result);
}
