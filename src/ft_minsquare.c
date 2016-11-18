/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minsquare.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewallner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 10:08:58 by ewallner          #+#    #+#             */
/*   Updated: 2016/11/18 11:05:23 by ewallner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_countblocks(char *str)
{
	int		i;
	int		n;
	int		count;

	count = 1;
	i = 0; 
	while (str[i] != '\0')
	{
		n = 0;
		while (str[i] == '\n')
		{
			n++;
			if (n == 2)
				count++;
			i++;
		}
		i++;
	}
	return (count);
}

int		ft_minsquare(char *str)
{
	int		i;
	int		nbr;

	nbr = ft_countblocks(str);
	i = 2;
	nbr = nbr * 4;
	while (i * i <= nbr)
	{
		i++;
	}
	return (i);
}

/* ft_countblocks counts the blocks by indicating when there are who \n in a row
 * ft_minsquare takes the amount of blocks, multiplies it with 4 to get the 
 * the total amount of tetris peices. It then increses the square starting from
 * 2, until it is equal or larger to the total amount of tetris pieces. */
