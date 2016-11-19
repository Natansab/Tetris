/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unittest_emil.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewallner <ewallner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 10:51:07 by ewallner          #+#    #+#             */
/*   Updated: 2016/11/19 17:33:22 by nsabbah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"
#include <stdio.h>

int			main(int argc, char **argv)
{
	int i;
	int k;
	(void)argc;
	(void)argv;
	int **tetro;

	tetro = (int **)malloc(4 * sizeof(*tetro));
	tetro[0] = (int *)malloc(4 * sizeof(tetro));
	tetro[1] = (int *)malloc(4 * sizeof(tetro));
	tetro[2] = (int *)malloc(4 * sizeof(tetro));

	i = 0;
	k = 0;

	tetro[0][0] = 0;
	tetro[0][1] = 1;
	tetro[0][2] = 5;
	tetro[0][3] = 6;

	tetro[1][0] = 0;
	tetro[1][1] = 1;
	tetro[1][2] = 5;
	tetro[1][3] = 6;

	tetro[2][0] = 0;
	tetro[2][1] = 5;
	tetro[2][2] = 10;
	tetro[2][3] = 15;


	printf("hello");
  char grid[22] = "....\n....\n....\n....\n";
	ft_algotetro(tetro, 0, grid);
	//(void)argc;
//	printf("Check the Grid: %d \n", ft_checkgrid(ft_filetostr(argv[1])));
//	printf("Check the Tetri: %d \n", ft_checktetri(ft_filetostr(argv[1])));
//	puts(ft_filetostr(argv[1]));
	//printf("Check the min square width: %d \n", ft_minsquare(ft_filetostr(argv[1])));
	return (0);
}
