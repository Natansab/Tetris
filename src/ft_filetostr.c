/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filetostr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewallner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 13:08:09 by ewallner          #+#    #+#             */
/*   Updated: 2016/11/17 20:09:07 by ewallner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"
#include "../libft/libft.h"
#define BUF_SIZE 441

/* BUF_SIZE is equal to 26 blocks without the last new line. 26 * (16 + \n) - 1
= 441  */

char		*ft_filetostr(char *file)
{
	int		ret;
	int		fd;
	char	*buffer;
	int		maxfile;
	char	*output;

	maxfile = 0;
	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		ft_errormsg(1);
		return (NULL);
	}
	if (!(buffer = (char*)malloc(sizeof(*buffer) * (BUF_SIZE + 1))))
		return (NULL);
	/* read returns the characters read to ret, i.e the file size. It returns
	 * the string into buffer. If the file is too large(> 441) it will loop once and 
	 * reach an error msg. Ret == 0, if there is an error. */
	while ((ret = read(fd, buffer, BUF_SIZE)) != 0)
	{
		buffer[ret] = '\0';
		if (maxfile++ == 0)
			output = ft_strdup(buffer);
		else 
		{
			ft_errormsg(2);
			return (NULL);
		}
	}
	close(fd);
	free(buffer);
	return (output);
}
/* ft_strdup creates a new string with the size of the file since the buffer
 * is '\0'. The output pointer points to fresh copied string. */
