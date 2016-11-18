/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algotetro.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabbah <nsabbah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 16:48:38 by nsabbah           #+#    #+#             */
/*   Updated: 2016/11/18 16:57:54 by nsabbah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Function to create the string with the format ....\n....\n....\n....\n
The function has in argument that size of the square. For the example above
the size should be 4.*/

char *ft_tetrogrid(int i)
{
  int j;
  char *str;

  str = (char **)malloc(sizeof(char) * (i * i + i + 1));
  if (str == NULL)
    return (NULL);
  j = 0;
  while (str[j])
  {
    if (j % i != (i + 1))
      str[j] = '.';
    else
      str[j] = '\n';
    j++;
  }
  str[j] = '\0';
  return (str);
}

char *ft_algotetro(void)
{
  int tab[4][4];

  /*Creating two tetrominos that are in 4x4 square with newline*/

  tab[0][0] = 0;
  tab[0][1] = 1;
  tab[0][2] = 2;
  tab[0][3] = 6;

  tab[1][0] = 0;
  tab[1][1] = 1;
  tab[1][2] = 2;
  tab[1][3] = 6;


}
