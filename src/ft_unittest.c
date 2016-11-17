/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unittest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewallner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 14:41:40 by ewallner          #+#    #+#             */
/*   Updated: 2016/11/17 20:28:00 by ewallner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"
#include <stdio.h>

int			main(int argc, char **argv)
{
	(void)argc;
	puts(ft_filetostr(argv[1]));
	return (0);
}
