/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unittest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewallner <ewallner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 14:41:40 by ewallner          #+#    #+#             */
/*   Updated: 2016/11/21 22:32:49 by ewallner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/header.h"
#include <stdio.h>

int			main(void)
{
	char *str;

	str = ft_makegrid(5);
	puts(str);


	//(void)argc;
	//int i = 0;
	//int		**tetro;
	//char str[300] = "....\n.##.\n..##\n....\n\n....\n....\n..##\n..##\n\n....\n....\n####\n....\n\n....\n....\n..##\n..##\n";
	//tetro = ft_tetrotoarray(str);
	//while (i < 3)
	//{
	//printf("This is it: %d, ", tetro[i][0]);
	//printf("This is it: %d, ", tetro[i][1]);
	//printf("This is it: %d, ", tetro[i][2]);
	//printf("This is it: %d\n", tetro[i][3]);
	//i++;
	//}
//	printf("Check the Grid: %d \n", ft_checkgrid(ft_filetostr(argv[1])));
//	printf("Check the Tetri: %d \n", ft_checktetri(ft_filetostr(argv[1])))
//	printf("\nCheck the File: %i \n", ft_checkfile(ft_filetostr(argv[1])));
//	puts(ft_filetostr(argv[1]));
//	printf("Make grid of %i is :\n%s \n", 6, (ft_makegrid(6)));
	return (0);
}
