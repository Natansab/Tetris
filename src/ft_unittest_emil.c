/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unittest_emil.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewallner <ewallner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 10:51:07 by ewallner          #+#    #+#             */
/*   Updated: 2016/11/21 22:31:51 by ewallner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"
#include <stdio.h>

int			main(int argc, char **argv)
{
	(void)argc;
	ft_algotetro(ft_tetrotoarray(ft_filetostr(argv[1])), 0, ft_makegrid(2), (strlen(ft_filetostr(argv[1])) + 1)/ 21);
	return (0);
}
