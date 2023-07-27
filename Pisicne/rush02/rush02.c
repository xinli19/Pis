/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 11:28:25 by xili              #+#    #+#             */
/*   Updated: 2023/07/23 11:28:40 by xili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#define BUF_SIZE 1024

int	line_length(char **buf)
{
	int	len;
	int	i;
	
	i = 0;
	len = 0;
	while (*buf[i] != '\0')
	{	
		i++;
		len++;
	}
	return (len);
}

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
//	if (check_value_part(&num_arr[i + 1]) == 0)
//		return (-1);
// control check
	printf("num_arr[i] is: %c\n", num_arr[i]);
	printf("atoi control :%lld", result);
	return (result);
}


int main()
{
	int i;
	int j;
	int len;	
	int index;
	char buf[BUF_SIZE];
	long long	lineCount;
	long long	bytesRead;
	int	fd;
	char **lines;
	long long	*number_part;
	char ** value_part;
	//put already into ft.h
   	struct	dict_entry 
   	{
    	int *key;   // For the number as a string
    	char *value; // For the corresponding word
	};
//file handling
	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
        	return 1;
	bytesRead = read(fd, buf, BUF_SIZE - 1);
	if (bytesRead >= 0)
		buf[bytesRead] = '\0';
	else
		return 1;
//control:
printf("fd is %d \n", fd);
printf("bytesRead is %lld \n",bytesRead);
printf("%s", buf);

//1.store the data
	lineCount = count_lines(buf, bytesRead);
	
//2.Allocate memory for line pointers

   	lines = malloc(lineCount * sizeof(char *));
   	
//3. malloc the memory for key arr and value arr

	number_part = (long long *)malloc(lineCount* sizeof(int));
	value_part = (char**)malloc(bytesRead+1);
	 if(value_part == NULL)
	 printf("failed outer malloc!\n");
	 
	 
	 i = 0;
	 j = 0;
    	/*while (i < lineCount) {
    		
    		len = line_length(&lines[j]);
        	value_part[i] = (char* )malloc(len +1 );
        	if (value_part[i] == NULL)
        		printf("failed initialtin");
        	j++;
        	i++;
    	}

*/
	
//4.malloc the struct

	struct	 dict_entry *dictionary = malloc(lineCount * sizeof(struct dict_entry));

        // control
	if (number_part == NULL || value_part == NULL)
		printf("false initiaion with malloc! \n");
	else
		printf("control check: success malloc for number_part and value_part\n");
	printf("Control: Number of lines: %lld\n", lineCount);

//5.store each line from long buf str to the lines array
//// XIN :FAILED TO SEPERATE THIS FUNCTION
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
   
	
	// control:  Print lines
	i = 0;
	while (i < lineCount) 
	{
        printf("Control : Line %d: %s\n", i, lines[i]);
        i++;
        }
	

//////////////////////////////// reading and parsing
    
	 i = 0;
	 j = 0;
	 
//atoi convert the char digit into the int *number_part

	while(i < lineCount)
	{
		number_part[i] = ft_atoi(lines[i]);
		printf(" control : the number_part is %lld\n", number_part[i]);
		i++;
	}

	i = 0;
	j = 0;
	 int index_i =0;
	 char *value_arr = (char *)malloc (1000);
	printf("start \n");
	////
	while (i < 2)
    {
		
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
			
			while (lines[i][j] == ' ')
			{
				
			     printf("space");
			}
			
			while (lines[i][j] != '\0')
			{
			
			if (lines[i][j-1] != ' ' && lines[i][j+1] != ' ' || lines[i][j] == ' ' && lines[i][j+1] != ' ' && lines[i][j+1] != '\0')
			{
			 printf( "here is a space ,save the space  %c\n",lines[i][j]);
			 value_arr[index_i] = lines[i][j];
			
			}
			else if (lines[i][j] >= 32 && lines[i][j] < 127 && lines[i][j] != ' ')
			{
				printf( " save the %c\n",lines[i][j]);
				value_arr[index_i] = lines[i][j];
				
			}
			else if (lines[i][j] == ' ' )
				printf("skip\n");
				

			else
			{
				printf("not valid");
			}
		j++;	
		index_i++;	
		}	
	i++;
	
	j= 0;

    }
   	printf("value is %s \n",*value_part);
 
   	}
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
