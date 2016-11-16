/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabbah <nsabbah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 15:06:50 by nsabbah           #+#    #+#             */
/*   Updated: 2016/11/16 15:10:15 by nsabbah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_checkgrid(char str);

int main(int argc, char **argv)
{
  printf("Validite de la grille : %i\n", ft_checkgrid(argv[1]));
  return (0);
}
