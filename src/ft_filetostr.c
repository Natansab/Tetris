/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filetostr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewallner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 13:08:09 by ewallner          #+#    #+#             */
/*   Updated: 2016/11/17 17:00:41 by ewallner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#define BUF_SIZE 441

/* BUF_SIZE is equal to 26 blocks without the last new line. 26 * (16 + \n) - 1
= 441  */

char		*ft_filetostr(char *file)
{
	int		ret;
	int		fd;
	char	*buffer;
	char	maxfile;
	char	*output

	maxfile = 0;
	fd = open(file, RDONLY);
	if (fd == -1)
		return (ft_errormsg(1);
	if (!(buffer = (char*(sizeof(*buffer) * (BUF_SIZE + 1)))))
		return (NULL);
	/* read returns the characters read to ret, i.e the file size. It returns
	 the string into buffer. If the file is too large(> 441) it will loop once and 
	 reach an error msg */
	while ((ret = read(fd, buffer, BUF_SIZE)) != 0)
	{
		buffer[ret] = '\0';
		if (maxfile++ == 0)
			dest = ft_strcpy(output, buffer);
		else 
			return (ft_errormsg(2);
	}
	close(fd);
	free(buffer);
	return (output);
}





