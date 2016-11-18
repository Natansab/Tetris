/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unittest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewallner <ewallner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 14:41:40 by ewallner          #+#    #+#             */
/*   Updated: 2016/11/18 15:56:49 by nsabbah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"
#include <stdio.h>

int			main(int argc, char **argv)
{
	(void)argc;
//	printf("Check the Grid: %d \n", ft_checkgrid(ft_filetostr(argv[1])));
//	printf("Check the Tetri: %d \n", ft_checktetri(ft_filetostr(argv[1])))
	printf("\nCheck the File: %i \n", ft_checkfile(ft_filetostr(argv[1])));
	puts(ft_filetostr(argv[1]));
	return (0);
}
