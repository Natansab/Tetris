/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minsquare.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewallner <ewallner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 10:08:58 by ewallner          #+#    #+#             */
/*   Updated: 2016/11/22 11:52:20 by nsabbah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_minsquare(int nb_of_tetros)
{
	int		i;
	int		nbr;

	nbr = nb_of_tetros;
	i = 2;
	nbr = nbr * 4;
	while (i * i < nbr)
		i++;
	return (i);
}

/* ft_countblocks counts the blocks by indicating when there are who \n in a row
 * ft_minsquare takes the amount of blocks, multiplies it with 4 to get the
 * the total amount of tetris peices. It then increses the square starting from
 * 2, until it is equal or larger to the total amount of tetris pieces. */
