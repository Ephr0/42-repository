/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchuluun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 17:39:48 by bchuluun          #+#    #+#             */
/*   Updated: 2023/05/23 10:38:49 by bchuluun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
/*#include <unistd.h>*/

void	ft_swap(int	*a,	int	*b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main(void)
{
	int z = 1;
	int x = 2;

	printf("z:%d, x: %d\n", z,x); 
	ft_swap(&z, &x);
	printf("z:%d, x: %d\n", z,x); 
}
*/
