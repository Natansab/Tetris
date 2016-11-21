/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetrotoarray.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabbah <nsabbah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 10:39:21 by nsabbah           #+#    #+#             */
/*   Updated: 2016/11/21 16:48:00 by ewallner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "../libft/libft.h"

int *ft_tetrotocoord(int *tetro, char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == '#')
		{
			tetro[j] = i;
			j++;
		}
		i++;
	}
return (tetro);
}

// Move the tetro to the up
char *ft_cutrow(char *str)
{
	int i;
	int j;
	int k;

	while (str[0] == '.' && str[1] == '.' && str[2] == '.' && str[3] == '.')
	{
		j = 0;
		while (j < 11)
		{
			i = 0;
			while (i < 4)
			{
				str[i + j] = str[i + j + 5];
				i++;
			}
			j = j + 5;
		}
		k = 15;
		while (k < 19)
			{
				str[k] = '.';
				k++;
			}
	}
return (str);
}

// Move the tetro to the left
char *ft_cutcol(char *str)
{
	int i;
	int j;
	int k;

	while (str[0] == '.' && str[5] == '.' && str[10] == '.' && str[15] == '.')
	{
		j = 0;
		while (j < 16)
		{
			i = 0;
			while (i < 3)
			{
				str[i + j] = str[i + j + 1];
				i++;
			}
			j = j + 5;
		}
		k = 3;
		while (k < 19)
			{
				str[k] = '.';
				k = k + 5;
			}
	}
return (str);
}

int **ft_tetrotoarray(char *str)
{
	int nb_of_tetros;
	int **tetro;
	int i;

// Define the nb of tetros
	nb_of_tetros = (strlen(str) + 1) / 21;

// Allocate the number of tetros with malloc
	if (!(tetro = (int**)malloc(sizeof(*tetro) * nb_of_tetros)))
		return (NULL);
// Allocate for each tetro, 4 int
	i = 0;
	while (i < nb_of_tetros)
	{
		if (!(tetro[i] = (int*)malloc(sizeof(tetro) * 4)))
			return (NULL);
		// Do not forget to change strndup to ft_strndup, check if needs to free the memory of ft_strndup
		tetro[i] = ft_tetrotocoord(tetro[i], ft_cutcol(ft_cutrow(strndup(str + i * 21, 20))));
		i++;
	}
	return (tetro);
}
