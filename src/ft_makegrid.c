/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_makegrid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabbah <nsabbah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 16:58:16 by nsabbah           #+#    #+#             */
/*   Updated: 2016/11/21 21:42:52 by ewallner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*Function to create the string with the format ....\n....\n....\n....\n
The function has in argument that size of the square. For the example above
the size should be 4.*/

char *ft_makegrid(int i)
{
  int j;
  char *str;

  str = (char*)malloc(sizeof(char) * (i * (i + 1) + 1));
  if (str == NULL)
    return (NULL);
  j = 0;
  while (j < i * (i + 1) - 1)
  {
    if ((j + 1) % (i + 1) != 0)
      str[j] = '.';
    else
      str[j] = '\n';
    j++;
  }
  str[j] = '\0';
  return (str);
}
