/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaturzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 16:56:07 by npaturzo          #+#    #+#             */
/*   Updated: 2023/05/28 16:58:56 by npaturzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	write_out(int output[][4], int x, int write[4]);

int	fill_4(int column, int opposite, int output[][4], int count[2][4])
{
	int	write[4];

	if (opposite == 1)
	{
		count[1][column] = 1;
		write[0] = 1;
		write[1] = 2;
		write[2] = 3;
		write[3] = 4;
		write_out(output, column, write);
		return (0);
	}
	return (1);
}
