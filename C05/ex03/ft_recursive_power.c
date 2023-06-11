/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchuluun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:21:37 by bchuluun          #+#    #+#             */
/*   Updated: 2023/06/06 09:27:59 by bchuluun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power > 1)
		nb = nb * ft_recursive_power(nb, power - 1);
	return (nb);
}
/*
int main(void)
{
	printf("%i", ft_recursive_power(3, 3));
}
*/
