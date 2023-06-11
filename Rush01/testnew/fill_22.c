/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_22.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaturzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 16:26:20 by npaturzo          #+#    #+#             */
/*   Updated: 2023/05/28 16:51:02 by npaturzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	write_out(int output[][4], int x, int write[]);

void	opp_20(int column, int output[4][4], int count[2][4])
{
	int	write[4];

	if (count[0][column] == 0)
	{
		write[0] = 1;
		write[1] = 4;
		write[2] = 2;
		write[3] = 3;
		write_out(output, column, write);
	}
}

void	opp_21(int column, int output[4][4], int count[2][4])
{
	int	write[4];

	if (count[0][column] == 1)
	{
		write[0] = 2;
		write[1] = 4;
		write[2] = 1;
		write[3] = 3;
		write_out(output, column, write);
	}
}

void	opp_22(int column, int output[4][4], int count[2][4])
{
	int	write[4];

	if (count[0][column] == 2)
	{
		write[0] = 3;
		write[1] = 1;
		write[2] = 4;
		write[3] = 2;
		write_out(output, column, write);
	}
}

void	opp_23(int column, int output[4][4], int count[2][4])
{
	int	write[4];

	if (count[0][column] == 3)
	{
		write[0] = 3;
		write[1] = 2;
		write[2] = 4;
		write[3] = 1;
		write_out(output, column, write);
	}
	if (count[0][column] == 4)
	{
		write[0] = 3;
		write[1] = 4;
		write[2] = 1;
		write[3] = 2;
		write_out(output, column, write);
	}
}

void	opp_2(int column, int output[4][4], int count[2][4])
{
	if (count[0][column] == 0)
		opp_20(column, output, count);
	if (count[0][column] == 1)
		opp_21(column, output, count);
	if (count[0][column] == 2)
		opp_22(column, output, count);
	if (count[0][column] > 2)
		opp_23(column, output, count);
}
