/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_line.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 11:20:50 by xili              #+#    #+#             */
/*   Updated: 2023/07/23 11:25:33 by xili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void put_line(long long bytesRead, char *buf, char *lines )
{
	int	i;
	int	lineIndex;
	char *lineStart;

	i = 0;
	lineIndex = 0;
   	lineStart = buf;
	while (i < *bytesRead) 
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
}
