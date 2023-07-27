int count_lines(char *buf, long long bytesRead) 
{
	long long	i;
	long long 	lineCount;
	
	lineCount = 0;
	i = 0;
	while (i < bytesRead) 
    {
        if (buf[i] == '\n') 
        	lineCount++;
        i++;
	}
	return (lineCount);
}
