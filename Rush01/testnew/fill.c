/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaturzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 09:56:31 by npaturzo          #+#    #+#             */
/*   Updated: 2023/05/28 15:11:36 by npaturzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This fills the values in the table, and runs the test
 * Returns 0 on success, 1 on failure
 * input is the array of boundary numbers
 * output is the grid we will print
 */
#include <stdio.h>

int		fill_1(int column, int opposite, int output[][4], int count[2][4]);
int		fill_2(int column, int opposite, int output[][4], int count[2][4]);
int		fill_3(int column, int opposite, int output[][4], int count[2][4]);
int		fill_4(int column, int oppsoite, int output[][4], int count[2][4]);
void	iterate(int i, int count[2][4]);
void	print_out(int to_print[][4]);

int	set_max(int count[2][4])
{
	return (count[1][0] * count[1][1] * count[1][2] * count[1][3]);
}

int	fill(int input[], int output[][4], int count[2][4], int tries)
{
	int	i;
	int maxcount;

	i = 0;
	while (i < 4)
	{
		if (input[i] == 1)
		{
			fill_1(i, input[i + 4], output, count);
			printf("passed fill_1\n");
		}
		if (input[i] == 2)
		{
			fill_2(i, input[i + 4], output, count);
			printf("passed fill_2\n");
		}
		if (input[i] == 3)
		{
			fill_3(i, input[i + 4], output, count);
			printf("passed fill_3\n");
		}
		if (input[i] == 4)
		{
			fill_4(i, input[i + 4], output, count);
			printf("passed fill_4\n");
		}
		i++;
	}
	maxcount = set_max(count);
	printf("maxcount = %i\n", maxcount);
//	if (tries  maxcount)
//		return(1);
	print_out(output);
	printf("\n");
	iterate(0, count);	
//	fill(input, output, count, tries + 1);
	return (0);
}
