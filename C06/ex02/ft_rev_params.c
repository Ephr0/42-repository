/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchuluun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 12:40:16 by bchuluun          #+#    #+#             */
/*   Updated: 2023/06/05 13:36:25 by bchuluun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	a;

	a = argc - 1;
	while (a > 0)
	{
		i = 0;
		while (argv[a][i] != '\0')
		{
			write(1, &argv[a][i], 1);
			i++;
		}
		write(1, "\n", 1);
		a--;
	}
	return (0);
}
