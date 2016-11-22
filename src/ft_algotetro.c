/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algotetro.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabbah <nsabbah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 16:48:38 by nsabbah           #+#    #+#             */
/*   Updated: 2016/11/22 16:38:15 by ewallner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include "../includes/header.h"
#include "../libft/libft.h"

char	*ft_printtetro(int **tetro, char *grid, int position, int i, int erase)
{
	int k;

	k = 0;
	while (k < 4)
	{
		if (erase)
			grid[tetro[i][k] + position] = '.';
		else
			grid[tetro[i][k] + position] = 'A' + i;
		k++;
	}
	return (grid);
}

int		ft_tetrofits(int **tetro, char *grid, int position, int i)
{
	int k;

	k = 0;
	while (k < 4)
	{
		if (grid[tetro[i][k] + position] != '.' || tetro[i][k] + position > ft_strlen(grid))
			return (0);
		k++;
	}
	return (1);
}

int		ft_algotetro(int **tetro, int i, char *grid, int nb_of_tetros)
{
	unsigned long	position;
	int				print;
	int				grid_size;

	grid_size = 0;
	while (grid[grid_size] == '.')
		grid_size++;
	if (i > nb_of_tetros - 1)
	{
		puts(grid);
		return (1);
	}
	position = 0;
	while (position < strlen(grid))
	{
		print = 0;
		if (ft_tetrofits(tetro, grid, position, i))
		{
			print = 1;
			grid = ft_printtetro(tetro, grid, position, i, 0);
			if (ft_algotetro(tetro, i + 1, grid, nb_of_tetros))
				return (1);
		}
		if (print)
			grid = ft_printtetro(tetro, grid, position, i, 1);
		position++;
	}
	if (i == 0)
	{
		tetro = ft_tetrotogrid(tetro, nb_of_tetros, grid_size + 1);
		return (ft_algotetro(tetro, 0,
					ft_makegrid(grid_size + 1), nb_of_tetros));
	}
	return (0);
}
