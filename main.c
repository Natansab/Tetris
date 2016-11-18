/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabbah <nsabbah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 15:06:50 by nsabbah           #+#    #+#             */
/*   Updated: 2016/11/18 10:17:44 by nsabbah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_checkgrid(char *str);
int ft_checktetri(char *str);

int main(void)
{
  printf("Is grid valid ? : %i\n", ft_checkgrid("....\n....\n....\n....\n"));
  printf("Is tetro valid ? : %i\n", ft_checktetri("#...\n#...\n....\n..##\n"));
  return (0);
}
