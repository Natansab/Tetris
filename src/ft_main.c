/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unittest_emil.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewallner <ewallner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 10:51:07 by ewallner          #+#    #+#             */
/*   Updated: 2016/11/21 15:08:12 by ewallner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"
#include <stdio.h>

int			main(int argc, char **argv)
{
	int i;
	int k;
	int **tetro;
	(void)argc;
	//(void)argc;
	
	tetro = ft_tetrotoarray(ft_filetostr(argv[1]));
	printf("This is the first coordination: %d", tetro[0][0]);
//	printf("Check the Tetri: %d \n", ft_checktetri(ft_filetostr(argv[1])));
//	puts(ft_filetostr(argv[1]));
	//printf("Check the min square width: %d \n", ft_minsquare(ft_filetostr(argv[1])));
	return (0);
}
