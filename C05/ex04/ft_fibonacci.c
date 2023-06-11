/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchuluun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:57:32 by bchuluun          #+#    #+#             */
/*   Updated: 2023/06/06 09:29:23 by bchuluun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	a;

	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		a = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (a);
}
/*
int main(void)
{
	printf("%d\n", ft_fibonacci(6));
}
*/
