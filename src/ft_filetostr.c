/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filetostr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewallner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 13:08:09 by ewallner          #+#    #+#             */
/*   Updated: 2016/11/22 15:55:30 by nsabbah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"
#include "../libft/libft.h"
#define BUF_SIZE 441

char	*ft_filetostr(char *file)
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
