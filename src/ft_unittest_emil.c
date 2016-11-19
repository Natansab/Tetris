/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unittest_emil.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewallner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 10:51:07 by ewallner          #+#    #+#             */
/*   Updated: 2016/11/19 16:27:41 by ewallner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"
#include <stdio.h>

int			main(int argc, char **argv)
{

	(void)argc;
	(void)argv;
	int tetro[2][4] = {
		{0, 1, 2, 3},
		{0, 1, 2, 3}
	};
	printf("hello");
	char grid[20] = "....\n....\n....\n....\n";
	ft_algotetro((int **)tetro, 0, grid);
	//(void)argc;
//	printf("Check the Grid: %d \n", ft_checkgrid(ft_filetostr(argv[1])));
//	printf("Check the Tetri: %d \n", ft_checktetri(ft_filetostr(argv[1])));
//	puts(ft_filetostr(argv[1]));
	//printf("Check the min square width: %d \n", ft_minsquare(ft_filetostr(argv[1])));
	return (0);
}
