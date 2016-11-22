/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minsquare.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewallner <ewallner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 10:08:58 by ewallner          #+#    #+#             */
/*   Updated: 2016/11/22 15:54:27 by nsabbah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_minsquare(int nb_of_tetros)
{
	int		i;
	int		nbr;

	nbr = nb_of_tetros;
	i = 2;
	nbr = nbr * 4;
	while (i * i < nbr)
		i++;
	return (i);
}
