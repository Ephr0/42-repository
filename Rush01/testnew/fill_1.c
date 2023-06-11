/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaturzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 10:08:00 by npaturzo          #+#    #+#             */
/*   Updated: 2023/05/28 17:05:42 by bchuluun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	write_out(int output[][4], int write[]);

int	fill_1(int column, int opposite, int output[][4], int count[2][4])
{
	int	write[4];

	if (opposite == 1)
		return (1);
	if (opposite == 2)
	{
		count[1][column] = 2;
		opp2(column, output, count);
	}
	if (opposite == 3)
	{
		count[1][column] = 2;
		opp3(column, output, count);
	}
	if (opposite == 4)
	{
		count[1][column] = 1;
		opp4(column, output, count);
	}
	return (1);
}

void	opp2(int column, int output[][4], int count[2][4])
{
	int	write[4];

	if (count[0][column] == 0)
	{
		write[0] = 4;
		write[1] = 1;
		write[2] = 2;
		write[3] = 3;
		write_out(output, column, write);
	}
	if (count[0][column] == 1)
	{
		write[0] = 4;
		write[1] = 2;
		write[2] = 1;
		write[3] = 3;
		write_out(output, column, write);
	}
	return (0);
}

void	opp3(int column, int output[][4], int count[2][4])
{
	int	write[4];

	if (count[0][column] == 0)
	{
		write[0] = 4;
		write[1] = 3;
		write[2] = 1;
		write[3] = 2;
		write_out(output, column, write);
	}
	if (count[0][column] == 1)
	{
		write[0] = 4;
		write[1] = 1;
		write[2] = 3;
		write[3] = 2;
		write_out(output, column, write);
	}
	return (0);
}

void	opp4(int column, int output[][4], int count[2][4])
{
	int	write[4];

	write[0] = 4;
	write[1] = 3;
	write[2] = 2;
	write[3] = 1;
	write_out(output, column, write);
	return (0);
}
