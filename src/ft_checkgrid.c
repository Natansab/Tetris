/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkgrid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabbah <nsabbah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 14:49:42 by nsabbah           #+#    #+#             */
/*   Updated: 2016/11/16 17:05:54 by nsabbah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int ft_checkgrid(char *str)
{
  int i;

  if (strlen(str) != 20)
    return (0);
  i = 0;
  while (str[i])
  {
    if ((i + 1) % 5 == 0 && str[i] != '\n' && i != 0)
      return (0);
    if ((i + 1) % 5 != 0 && str[i] != '.' && str[i] != '#')
      return (0);
    i++;
  }
  return (1);
}