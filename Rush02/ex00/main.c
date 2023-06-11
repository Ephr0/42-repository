/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaker <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 12:42:31 by tbaker            #+#    #+#             */
/*   Updated: 2023/06/04 21:57:09 by bchuluun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "rush02.h"

int	main(int argc, char *argv[])
{
	long			input;
	struct s_dict	*dic;
	int				*dlenp;
	int				dlen;

	dlen = 0;
	dlenp = &dlen;
	if (argc == 2)
	{
		input = ft_atoi(argv[1]);
		if (input > UINT_MAX || input < 0)
			return (error());
		dic = open_dict(0, dlenp);
	}
	else if (argc == 3)
	{
		input = ft_atoi(argv[2]);
		if (input > UINT_MAX || input < 0)
			return (error());
		dic = open_dict(argv[1], dlenp);
	}
	else
		return (error());
	write_output(dic, input, dlen - 1);
}
