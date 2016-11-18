/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewallner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 20:13:07 by ewallner          #+#    #+#             */
/*   Updated: 2016/11/18 15:22:05 by ewallner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <string.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

typedef struct	s_data
{
	int				x;
	int				y;
	int				height;
	int				width;
	int				id;
	char			*shape;
	struct s_data	*next;
}				t_data;

void	ft_errormsg(int msg);
char	*ft_filetostr(char *file);
int		ft_checktetri(char *str);
int		ft_checkgrid(char *str);
int		ft_minsquare(char *str);
int		ft_countblocks(char *str);

#endif
