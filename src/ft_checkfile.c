/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkfile.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabbah <nsabbah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 10:33:39 by nsabbah           #+#    #+#             */
/*   Updated: 2016/11/18 14:37:48 by nsabbah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"
#include "../libft/libft.h"
#include <stdio.h>

int ft_checkfile(char *str)
{
  int i;

  i = 0;
  printf("ft_strlen(str) is %i\n", ft_strlen(str));
  ft_putstr("hello\n");
  while (ft_checkgrid(&str[i]) && ft_checktetro(&str[i]))
  {
    if (i + 20 == ft_strlen(str))
      return (1);
    i = i + 20;
    if (str[i] != '\n')
    {
      printf("i here is : %i && str[i] = %c\n", i, str[i]);
      return (0);
    }
    i++;
    printf("i is : %i \n", i);
  }
  printf("ft_strlen(str) is %i\n", ft_strlen(str));
  if (i == ft_strlen(str))
    return (1);
  return (0);
}
