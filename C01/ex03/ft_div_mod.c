/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchuluun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 18:33:14 by bchuluun          #+#    #+#             */
/*   Updated: 2023/05/23 10:36:36 by bchuluun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
/*#include <unistd.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main(void)
{
	int	a = 10;
	int	b = 2;
	int div = 0;
	int mod = 0;

	ft_div_mod(a, b, &div, &mod);
	printf("a:%d, b:%d, %d, %d", a, b, div, mod);
}
*/
