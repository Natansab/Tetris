/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetrotogrid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewallner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 10:08:53 by ewallner          #+#    #+#             */
/*   Updated: 2016/11/21 11:09:10 by ewallner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		**ft_tetrotogrid(int **t, char *grid)
{
	int		i;
	int		id;
	int		width;

	id = -1;
	width = 0;
	i = -1;
	while (grid[++i] == '.')
		width++;
	i = 0;
	while (t[++id] != '\0')
	{
		i = -1;
		if (width == 2) 
			while (++i < 4)
				t[id][i] = t[id][i] - (t[id][i] / 5 * 2);
		else if (width == 3)
			while (++i < 4)
				t[id][i] = t[id][i] - (t[id][i] / 5 * 1);
		else if (width > 4) 
			while (++i < 4)
				t[id][i] = t[id][i] + (t[id][i] / 5 * (width - 4 + 1));
	}
	return (t);
}


/* t = tetro
 * If the grid width, without the '\n' is two. Then we remove 2 boxes for each 
 * line. We do this to be able to print a tetro with one square. 
 * Same for the grid with 3 in width.
 * If the square is larger than 4 we add the grid - 4(tetro width) times the row
 * the first row is times 0. */







