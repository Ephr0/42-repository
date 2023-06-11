/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaturzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 09:39:19 by npaturzo          #+#    #+#             */
/*   Updated: 2023/05/28 14:38:05 by npaturzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	print_error(void);
int		check_args(char *str, int input[]);
void	print_out(int to_print[][4]);
int		fill(int input[], int output[][4], int count[2][4], int tries);

void	set_count(int count[2][4])
{
	int	i;

	while (i < 4)
	{
		count[0][i] = 0;
		count[1][i] = 0;
		i++;
	}
}

void	set_out(int output[4][4])
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			output[i][j] = 0;
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	input[16];
	int	output[4][4];
	int	count[2][4];

	if (argc != 2)
	{
		print_error();
		return (1);
	}
	if (check_args(argv[1], input) != 0)
			return (1);
	set_count(count);
	fill(input, output, count, 0);
	print_out(output);
}
