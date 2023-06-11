/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchuluun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:59:18 by bchuluun          #+#    #+#             */
/*   Updated: 2023/05/31 18:13:44 by bchuluun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	n;

	n = nb;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else if (nb > 0)
	{
		while (n > 1)
		{
			nb = nb * (n - 1);
			n--;
		}
		return (nb);
	}
	return (nb);
}
/*
#include <stdio.h>
int main(void)
{
	int	nb = 6;
	printf("%i", ft_iterative_factorial(nb));
}
*/
