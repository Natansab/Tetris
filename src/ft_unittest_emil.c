/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unittest_emil.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewallner <ewallner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 10:51:07 by ewallner          #+#    #+#             */
/*   Updated: 2016/11/22 08:35:30 by ewallner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"
#include <stdio.h>

int			main(int argc, char **argv)
{
	(void)argc;
	char	*str;
	int		nb_of_tetros;
	int		square;

	str = ft_filetostr(argv[1]);
	square = ft_minsquare(str);
	nb_of_tetros = (strlen(str) + 1) / 21;
	ft_algotetro(ft_tetroinit(ft_tetrotoarray(str), nb_of_tetros, square), 0, ft_makegrid(ft_minsquare(str)), (nb_of_tetros));
	return (0);
}
