/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchuluun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 12:10:57 by bchuluun          #+#    #+#             */
/*   Updated: 2023/05/31 18:09:50 by bchuluun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else if (nb > 0)
	{
		if (nb != 1)
			nb = nb * ft_recursive_factorial(nb - 1);
		return (nb);
	}
	return (nb);
}
/*
int	main(void)
{
	int nb = 6;
	printf("%i", ft_recursive_factorial(nb));
}
*/
