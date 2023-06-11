/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchuluun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 18:59:10 by bchuluun          #+#    #+#             */
/*   Updated: 2023/05/26 11:56:20 by bchuluun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
/*#include <unistd.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}
/*
int main(void)
{
	int a = 11;
	int b = 5;

	ft_ultimate_div_mod(&a, &b);
	printf("%d, %d", a, b);
}
*/
