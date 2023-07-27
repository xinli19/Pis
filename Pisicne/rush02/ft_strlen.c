int	ft_strlen(char *buf)
{
	int	i;

	i = 0;
	while (buf[i] != '\0')
	{	
		i++;
	}
	printf("control check, result of ft_strlen is %d\n",i);
	return (i);
}
