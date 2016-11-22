/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetroinit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewallner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 08:29:22 by ewallner          #+#    #+#             */
/*   Updated: 2016/11/22 08:35:33 by ewallner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		**ft_tetroinit(int **t, int nb_of_tetros, int width)
{
	int		i;
	int		id;
	
	id = 0;
	i = 0;
	while (id < nb_of_tetros)
	{
		i = 0;
	/*	if (width == 2) 
			while (i < 4)
			{
				t[id][i] = t[id][i] - ((t[id][i] / 5) * 2);
				i++;
			}
		else if (width == 3)
			while (i < 4)
			{
				t[id][i] = t[id][i] - ((t[id][i] / 5) * 1);
				i++;
			}*/		
		if (width > 4) 
			while (i < 4)
			{
				t[id][i] = t[id][i] + ((t[id][i] / 5) * (width - 4));
				i++;
			}
		id++;
	}
	return (t);
}


/* t = tetro
 * If the grid width, without the '\n' is two. Then we remove 2 boxes for each 
 * line. We do this to be able to print a tetro with one square. 
 * Same for the grid with 3 in width.
 * If the square is larger than 4 we add the grid - 4(tetro width) times the row
 * the first row is times 0. */


