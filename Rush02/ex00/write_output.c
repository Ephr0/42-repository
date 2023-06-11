/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_output.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaker <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 12:42:31 by tbaker            #+#    #+#             */
/*   Updated: 2023/06/04 21:49:57 by bchuluun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, " ", 1);
}

void	elseif(struct s_dict *dic, long input, int pos)
{
	int	count;

	count = 0;
	while ((input - dic[pos].i) >= 0)
	{
		count++;
		input = input - dic[pos].i;
	}
	if (dic[pos].i > 90)
		write_output(dic, count, pos);
	putstr(dic[pos].n);
	if (input != 0)
		write_output(dic, input, pos - 1);
}

int	write_output(struct s_dict *dic, long input, int pos)
{
	int	count;

	count = 0;
	if (pos < 0)
		return (0);
	if ((input - dic[pos].i) == 0)
	{
		putstr(dic[pos].n);
		return (1);
	}
	else if ((input - dic[pos].i) > 0)
	{
		elseif(dic, input, pos);
	}
	else if ((input - dic[pos].i) < 0 && input != 0)
	{
		write_output(dic, input, pos - 1);
	}
	return (1);
}
