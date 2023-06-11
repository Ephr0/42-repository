/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaduc <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 10:18:44 by mchaduc           #+#    #+#             */
/*   Updated: 2023/05/27 14:58:39 by mchaduc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	fill4_7(int i, int test[][4])
{
	int	n;
	int	c;

	n = i % 4;
	c = i / 4;
	if (i <= 3)
	{
		test[c][n] = 1;
		test[c + 1][n] = 2;
		test[c + 2][n] = 3;
		test[c + 3][n] = 4;
	}
	else
	{
		test[c][n] = 1;
		test[c - 1][n] = 2;
		test[c - 2][n] = 3;
		test[c - 3][n] = 4;
	}
	return (test[][]);
}

int	fill4_else(int i, int test[][4])
{
	int	n;
	int	c;

	n = i % 4;
	c = i / 4;
	if (i <= 11)
	{
		test[c][n] = 1;
		test[c][n + 1] = 2;
		test[c][n + 2] = 3;
		test[c][n + 3] = 4;
	}
	else
	{
		test[c][n] = 1;
		test[c][n - 1] = 2;
		test[c][n - 2] = 3;
		test[c][n - 3] = 4;
	}
	return (test[][]);
}

int	fill_1(int i, int test[][4])
{
	int	n;
	int	c;

	n = i % 4;
	c = i / 4;
	test[c][n] = 4;
	return (test[][]);
}

int	fill(int tab[], int out[])
{
	int	test[4][4];
	int	i;

	test = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};
	i = 0;
	while (i <= 15)
	{
		if (tab[i] == 4)
		{
			if (i <= 7)
			{
				test = fill4_7(i, test);
			}
			else
			{
				test = fill4_else(i, test);
			}
		}
		else if (tab[i] == 1)
		{
			fill1(i, test);
		}
		i++;
	}
	fill_other(test);
}
