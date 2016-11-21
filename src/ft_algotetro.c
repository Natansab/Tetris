/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algotetro.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabbah <nsabbah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 16:48:38 by nsabbah           #+#    #+#             */
/*   Updated: 2016/11/21 21:53:26 by ewallner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include "../includes/header.h"
#include "../libft/libft.h"

/* This function will print the AAAA or BBBB if we need to fit the tetro in
   the grid. If we need to erase the AAAA, erase = 1*/

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

/* ft_tetrofits is a function to determine if the tetro will fit in this
   position or if we should change position
   tab = tetro[index]
   */

int ft_tetrofits(int **tetro, char *grid, int position, int i)
{
	int k;

	k = 0;
//	ft_putstr(grid);
//	ft_putchar('\n');
	while (k < 4)
	{
		//printf(" value in the grid %c\n", grid[tetro[i][k] + position]);
		//printf(" i = %i, k = %i, position = %i\n", i, k, position);
		if (grid[tetro[i][k] + position] != '.')
			return (0);
		k++;
	}
	//printf("does it fit ?\n");
	//printf("position is %i\n", position);

	return (1);
}

int ft_algotetro(int **tetro, int i, char *grid, int nb_of_tetros)
{
	unsigned long  position;
	int print;
	int grid_size;

	printf("the number of tetros: %d \n", nb_of_tetros);

	grid_size = 0;
	while (grid[grid_size] == '.')
		grid_size++;
	if (i > nb_of_tetros - 1)
		return (1);
	position = 0;
	while (position < strlen(grid))
	{
		print = 0;
		if (ft_tetrofits(tetro, grid, position, i))
		{
			//ft_putstr("ok\n\n");
			print = 1;
			grid = ft_printtetro(tetro, grid, position, i, 0);
			ft_putstr("\n\n");
			ft_putstr(grid);
			ft_putstr("\n\n");
			if (ft_algotetro(tetro, i + 1, grid, nb_of_tetros))
				return (1);
		}
		if (print)
			grid = ft_printtetro(tetro, grid, position, i, 1);
		position++;
		printf("This is i: %d, and position: %d \n", i, (int)position);
	}
	if (i == 0)
	{
		printf("Cats are cool!>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");
		tetro = ft_tetrotogrid(tetro, nb_of_tetros, grid_size + 1);
		return (ft_algotetro(tetro, 0, ft_makegrid(grid_size + 1), nb_of_tetros));
	}
	return (0);
}
