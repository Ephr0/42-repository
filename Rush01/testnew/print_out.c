/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_out.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaturzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 11:09:22 by npaturzo          #+#    #+#             */
/*   Updated: 2023/05/28 14:00:17 by npaturzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	char_to_int(int to_print[][4], char print_char[4][4])
{
	int	x;	
	int	y;

	x = 0;
	y = 0;
	while (y < 4)
	{
		while (x < 4)
		{
			print_char[y][x] = to_print[y][x] + '0';
			x++;
		}
		x = 0;
		y++;
	}
}

void	print_out(int to_print[][4])
{
	int		x;
	int		y;
	char	print_char[4][4];

	x = 0;
	y = 0;
	char_to_int(to_print, print_char);
	while (y < 4)
	{
		while (x < 4)
		{
			write(1, &print_char[y][x], 1);
			x++;
		}
		x = 0;
		write(1, "\n", 1);
		y++;
	}
}
