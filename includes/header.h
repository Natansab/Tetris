/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewallner <ewallner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 20:13:07 by ewallner          #+#    #+#             */
/*   Updated: 2016/11/21 18:39:54 by ewallner         ###   ########.fr       */
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
int		ft_checktetro(char *str);
int		ft_checkgrid(char *str);
int		ft_minsquare(char *str);
int		ft_countblocks(char *str);
int ft_checkfile(char *str);
char *ft_makegrid(int);
int		ft_algotetro(int **tetro, int i, char *grid, int nb_of_tetros);
int		**ft_tetrotoarray(char *str);
int		**ft_tetrotogrid(int **t, int nb_of_tetros, int grid);

#endif
