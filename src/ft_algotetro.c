/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algotetro.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabbah <nsabbah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 16:48:38 by nsabbah           #+#    #+#             */
/*   Updated: 2016/11/19 14:41:06 by nsabbah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string.h>
#include <stdio.h>
#include <unistd.h>

/* This function will print the AAAA or BBBB if we need to fit the tetro in
the grid. If we need to erase the AAAA, erase = 1*/

void ft_printtetro(int *tab, char *grid, int position, int index, int erase)
{
  int i;

  i = 0;
  while (i < 4)
  {
    if (erase)
      grid[tab[i] + position] = '.';
    else
      grid[tab[i] + position] = 'A' + index;
    i++;
  }
}

/* ft_tetrofits is a function to determine if the tetro will fit in this
position or if we should change position
tab = tetro[index]
*/

int ft_tetrofits(int *tab, char *grid, int position)
{
  int i;

  i = 0;
  while (i < 4)
  {
    if (grid[tab[i] + position] != '.')
      return (0);
    i++;
  }
  return (1);
}

int ft_algotetro(int **tetro, int i, char *grid)
{
  int position;
  int print;

// i = index of Tetro
// Exit statement: when all the Tetros fit in the square
  if (i > 2/*# of Tetro*/)
    return (1);

// Always try to fit the block from the first position in the upper left
position = 0;
// While position is less that the lenth of the grid we try to fit the tetro
while (position < strlen(grid))
{
  print = 0;
  if (ft_tetrofits(tetro[i], grid, position))
  {
    print = 1;
    ft_printtetro(tetro[i], grid, position, i, 0);
    // shoudl pass grid to know the size of the grid
    if (ft_algotetro(tetro, (i + 1), grid))
      return (1);
  }
/* If we used ft_printtetro before but will change the position, we should
erase what we did*/
  if (print)
    ft_printtetro(tetro[i], grid, position, i, 1);
  position ++;
}

/* If tetro 0 is out the grid make a bigger grid. Put aside for now but
we should use a ft_tetroconv with the new size of the grid*/
  /*if (i = 0)
    return (ft_algotetro(tetro[0] grid++)); */
return (0);
}

int main(void)
{
  printf("hello");
  int tetro[3][4] =
  {
    {0, 1, 5, 6},
    {0, 1, 5, 6},
    {0, 1, 5, 6}
  };
  printf("hello");
  char grid[50] = "....\n....\n....\n....\n";
  return(ft_algotetro((int **)tetro, 0, grid));
}
