/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   single_line.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 17:51:00 by xili              #+#    #+#             */
/*   Updated: 2023/07/22 17:51:22 by xili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#define BUF_SIZE 1024

int	line_length(char *buf)
{
	int	i;
	int	len;


	i = 0;
	len = 0;
	while (buf[i] != '\0')
	{	
		i++;
		len++;
	}
	return (len);
}

int count_lines(char *buf, int bytesRead) 
{
	int	i = 0;
    	int 	lineCount = 0;
    	while (i < bytesRead) 
    	{
        	if (buf[i] == '\n') 
        	lineCount++;
        i++;
    	}
    	return lineCount;
}
int	ft_atoi(char *arr)
{
	int i;
	i = 0;
	int result;
	result = 0;
	int j;
	j = 0;
	
	while(arr[i] != ':')
	{
	if (arr[i] == '\0' || arr[i] == '\n')
		return (0);
	else if (arr[i] < '0' || arr[i] > '9')
		return (0);
	else if (arr[i] >= '0' && arr[i] <= '9')
	{
		result = result * 10 + (arr[i] - '0');
		i++;
		j++;
	}
	else 
		break ;
	}
	printf("atoi control :%d", result);
	return (result);	
}

int main()
{
 /////////////////////////////////////variable declare/////////////////////////////
 
	int i;
	int len = 0;	
	int j;
	int index;;
	char buf[BUF_SIZE];
	int lineCount;
   	struct	dict_entry 
   	{
    	int *key;   // For the number as a string
    	char *value; // For the corresponding word
	};
///////////////////////////PART ONE FILE HANDELING ///////////////////////////////
//get the file descripter.
    int fd = open("numbers.dict", O_RDONLY);
    if (fd == -1)
    {
        return 1;
    }
	printf("fd is %d \n", fd);

//read the file and save it into the buf
	int	 bytesRead;
    bytesRead = read(fd, buf, BUF_SIZE - 1);
	printf("bytesRead is %d \n",bytesRead);
	
//null terminate the buffer and error handle
	if (bytesRead >= 0)
		buf[bytesRead] = '\0';
	else
		return 1;
// now our buffer is a proper string! 

//	printf("%s", buf);

/////////////////////////STORE THE LINE INTO AN ARRAY////////////////////////////////

	lineCount = count_lines(buf, bytesRead);
//control:	
	printf("Control: Number of lines: %d\n", lineCount);
	
//Allocate memory for line pointers
   	char **lines = malloc(lineCount * sizeof(char *));
   	//3. malloc the memory for key arr and value arr

	int	 *number_part = (int *)malloc(len * sizeof(int));
	char	 *value_part = (char *)malloc(len + 1);
// malloc the struct

struct	 dict_entry *dictionary = malloc(bytesRead * sizeof(struct dict_entry));
// malloc control
	if (number_part == NULL || value_part == NULL)
		printf("false initiaion with malloc! \n");
	else
		printf("control check: success malloc for number_part and value_part\n");


// Store each line in the lines array
    	char *lineStart = buf;
  	 i = 0;
  	int lineIndex = 0;
	while (i < bytesRead) 
	{
       	 	if (buf[i] == '\n') 
       	 	{
            		buf[i] = '\0'; // Null-terminate the line
          	 	 lines[lineIndex] = lineStart; // Store line pointer
            		lineStart = buf + i + 1; // Move to the start of the next line
            		lineIndex++;
        	}
       		i++;
    }

    // Print lines
    i = 0;
    while (i < lineCount) {
        printf("Line %d: %s\n", i, lines[i]);
        i++;
    }
   
//////////////////////////////// reading and parsing
    
	 i = 0;
	 j = 0;
	 
	 
//atoi convert the char digit into the int *number_part

	while(i < lineCount)
	{
		number_part[i] = ft_atoi(lines[i]);
		printf("the number_part is %d\n", number_part[i]);
		i++;
	}

}
/*
//////////////////////might be useful code//////////////////////////////



//put the char value into the value_part arr

	while(i < lineCount)
	{
		while (lines[i] != ':')
			i++;
		printf("lines[i] now is %c,",lines[i]);
	}
	 

}
//3. malloc the memory for key arr and value arr

	char	 *number_part = (char *)malloc(len + 1);
	char	 *value_part = (char *)malloc(len + 1);
// malloc control
	if (number_part == NULL || value_part == NULL)
		printf("false initiaion with malloc! \n");
	else
		printf("control check: success malloc for number_part and value_part\n");


//
//control check : the number part 
	printf("the number_part is %s\n", number_part);
//assign the arr to the struct
    dictionary[index].key = number_part;

//trim the value
	i++;
	j = 0;
	while(line[i] != '\0')
	{
		while (line[i] == ' ')
			i++;
		if(line[i] >= 32 || line[i] <= 126)
		{
			value_part[j] = line[i];
			i++;
			j++;
		}
		else
			printf("ERROR\n");
	 }

/



*/
