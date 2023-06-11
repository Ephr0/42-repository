/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaturzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 10:18:04 by npaturzo          #+#    #+#             */
/*   Updated: 2023/05/28 16:48:18 by npaturzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	write_out(int output[][4], int x, int write[]);
void	opp_2(int column, int output[4][4], int count[2][4]);

void	opp_1(int column, int output[4][4], int count[2][4])
{
	int	write[4];

	if (count[0][column] == 0)
	{
		write[0] = 3;
		write[1] = 2;
		write[2] = 1;
		write[3] = 4;
		write_out(output, column, write);
	}
	if (count[0][column] == 1)
	{
		write[0] = 3;
		write[1] = 1;
		write[2] = 2;
		write[3] = 4;
		write_out(output, column, write);
	}
}

void	opp_32(int column, int output[4][4], int count[2][4])
{
	int	write[4];

	write[0] = 1;
	write[1] = 4;
	write[2] = 3;
	write[3] = 2;
	write_out(output, column, write);
}

void	opp_3(int column, int output[4][4], int count[2][4])
{
	int	write[4];

	if (count[0][column] == 0)
	{
		write[0] = 3;
		write[1] = 4;
		write[2] = 2;
		write[3] = 1;
		write_out(output, column, write);
	}
	if (count[0][column] == 1)
	{
		write[0] = 2;
		write[1] = 4;
		write[2] = 3;
		write[3] = 1;
		write_out(output, column, write);
	}
	if (count[0][column] == 2)
	{
		opp_32(column, output, count);
	}
}

int	fill_2(int column, int opposite, int output[][4], int count[2][4])
{
	int	write[4];

	if (opposite == 1)
	{
		count[1][column] = 2;
		opp_1(column, output, count);
		return (0);
	}
	if (opposite == 2)
	{
		count[1][column] = 5;
		opp_2(column, output, count);
		return (0);
	}
	if (opposite == 3)
	{
		count[1][column] = 3;
		opp_3(column, output, count);
		return (0);
	}
	return (1);
}
