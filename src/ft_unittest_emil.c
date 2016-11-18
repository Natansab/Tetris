/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unittest_emil.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewallner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 10:51:07 by ewallner          #+#    #+#             */
/*   Updated: 2016/11/18 11:04:44 by ewallner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"
#include <stdio.h>

int			main(int argc, char **argv)
{
	(void)argc;
//	printf("Check the Grid: %d \n", ft_checkgrid(ft_filetostr(argv[1])));
//	printf("Check the Tetri: %d \n", ft_checktetri(ft_filetostr(argv[1])));
//	puts(ft_filetostr(argv[1]));
	printf("Check the min square width: %d \n", ft_minsquare(ft_filetostr(argv[1])));
	return (0);
}
