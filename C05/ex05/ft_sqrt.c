/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchuluun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 17:50:36 by bchuluun          #+#    #+#             */
/*   Updated: 2023/06/06 09:31:19 by bchuluun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <limits.h>

int	ft_sqrt(int nb)
{
	int	root;

	root = 1;
	if (nb == 0)
		return (0);
	while (root * root <= nb && nb != 2147483647)
	{
		if ((nb % root == 0) && (root * root == nb))
			return (root);
		root++;
	}
	return (0);
}
/*
int main(void)
{
	printf("%i", ft_sqrt(INT_MAX));
}
*/
