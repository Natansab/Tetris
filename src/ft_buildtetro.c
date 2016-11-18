/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buildtetro.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewallner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 16:14:56 by ewallner          #+#    #+#             */
/*   Updated: 2016/11/18 18:02:37 by ewallner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_buildsquare(int width)
{
	int		*square;
	int		i;

	square = (int *)malloc(sizeof(int) * (width * width) + 2);
	if (square == NULL)
		return (NULL);
	i = 1;
	while (i <= (width * width) + 1)
	{
		square[i] = 0;
		i++;
	}
	square[i] = '\0';
	return (square);
}

/* s = square
 * w = width
 * t = tetro array
 * id = tetro order id
 * m = if one block allocation is succesful
 * */

void	ft_buildtetro(int **t, int w)
{
	int		*s;
	int		i;
	int		id;
	int		m;
	char	*square;

	t[0] = { 1, 2, 3, 4, '\0' };
	t[1] = { 5, 6, 7, 8, id '\0' };
	t[1][3] = 8
	

	s = ft_buildsquare(width);
	
	while (m != tetro amount)
	{
		convers blocks
		m = 0;
	while (index order completely reversed || m == tetro amount)
	{
	while (id < amount of tetro)
	{
		while (i < 4)
		{
			i = 0;
			while (s[t[id][i]] == '.' && i < 4)
				i++;
			if (i = 4)
				while (i-- != 0)
					s[t[id][i]] = id + 'A';
				m++;
			else
				//if (s[t[id][i]] == '\n')
				//	ft_newline(t[id]);
				else if (t[id][i] > (w * (w + 1) + 1))
				{
					i = 4;
					id = blocks - 1;
				}
		}
		id++;
	}
	ft_reverseindexonce;
	ft_cleansquare;
	}
	ft_increasesquare;
}
}
















