/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unittest_emil.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewallner <ewallner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 10:51:07 by ewallner          #+#    #+#             */
/*   Updated: 2016/11/22 15:53:52 by nsabbah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"
#include "../libft/libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*str;
	int		nb_of_tetros;
	int		square;
	int		**tetro;
	int		i;

	(void)argc;
	i = 0;
	str = ft_filetostr(argv[1]);
	if (ft_checkfile(str) == 0)
	{
		ft_putstr("error");
		return (0);
	}
	nb_of_tetros = (strlen(str) + 1) / 21;
	square = ft_minsquare(nb_of_tetros);
	tetro = ft_tetrotoarray(str);
	while (i < nb_of_tetros)
	{
		if ((tetro[i][3] == 3 || tetro[i][3] == 15) && square == 3)
		{
			square++;
			break ;
		}
		i++;
	}
	ft_algotetro(ft_tetroinit(tetro, nb_of_tetros, square), 0,
			ft_makegrid(square), (nb_of_tetros));
	return (0);
}
