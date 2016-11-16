/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backtracking.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewallner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 20:44:55 by ewallner          #+#    #+#             */
/*   Updated: 2016/11/16 23:16:54 by ewallner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_blocksToXY()
{
	
}

char	**ft_allblockXY()
{
	char	**blocks;
	char	*raw;
	raw = ft_filereadertostring(file)
	while()
	{	
	while (raw[i] != '\0')
	{
		blocks[w][k] = raw[i]
	}
	w++;
	}
}
void	ft_backtracking(positions, smallestsquare)
{
	if(positions == smallestsquare)
		ft_printsquare(positions);
	else
	{
		/* Move one index backward, e.g. 123456789 == 123456798. Each block is stored with four 
		coordinates and an index */
		positions = ft_oneindexback(positions);
		/* Increase if index is reversed */
		smallestsquare = ft_calculatesquare(positions);
		/* Validate Positions */
		ft_doesitfit(positions);
		ft_backtracking(positions, smallestsquare);
	}
}

void	ft_initialize(postitions, smallestsquare)
{
	char	**positions;
	int		smallestsquare;
	/* Checks if the block can create one square */
	ft_lackofdiversity(positions)
	ft_backtracking(positions, smallestsquare);
}
