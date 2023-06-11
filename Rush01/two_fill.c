/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   two_fill.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaturzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 16:00:18 by npaturzo          #+#    #+#             */
/*   Updated: 2023/05/27 17:08:11 by npaturzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Run through input until you hit a 2,
 *	Check column "c" / row "r"  against the 2 rules from notes
 *	Check for a 4, return its position
 *	Reun four_second, four_third, four_fourth etc.
 *	Fill in what you can
 *	Return
 */

#include <stdio.h>


int	look_four(int i, int out[][4])
{
	int r;
	int c;
	int j;

	c = i % 4;
	r = i / 4;
	j = 0;

	printf("r = %i\n", r);
	printf("c = %i\n", c);

	while(j < 4)
	{
		if (i < 4)
		{
			if (out[j][c] == 4)
				return (j + 1);
		}
		else if (i < 8)
		{
			if (out[4 - j][c] == 4)
				return (j + 1);
		}
		else if (i < 12)
		{
			if (out[r][j] == 4)
				return (j + 1);
		}
		else
		{
			if (out[r][4 - j] == 4)
				return (j + 1);
		}
		j++;
	}
	return (0);
}

void	two_fill(int input[], int out[][4])
{
	int	i;
	int	four;

	i = 0;
	while (i < 16)
	{
		if (input[i] == 2)
		{
			four = look_four(i, out);
			printf("Maybe four found at %i\n", four);
//			if (four == 2)
//				four_second(i, out);
//			if (four == 3)
//				four_third(i, out);
//			if (four == 4)
//				four_fourth(i, out);
		}
		i++;
	}
}
