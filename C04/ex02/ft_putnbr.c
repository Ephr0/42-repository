/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchuluun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 10:27:08 by bchuluun          #+#    #+#             */
/*   Updated: 2023/05/30 17:17:42 by bchuluun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <limits.h>

void	ft_putchar(char inp)
{
	write(1, &inp, 1);
}

int	counter(unsigned int num)
{
	int	i;

	i = 0;
	while (num > 9)
	{
		i++;
		num /= 10;
	}
	return (i);
}

unsigned int	neg(unsigned int numb)
{
	unsigned int	temp;

	temp = numb;
	temp = -1 * numb;
	write(1, "-", 1);
	return (temp);
}

void	ft_putnbr(int nb)
{
	int				i;
	int				n;
	unsigned int	nbtemp;
	unsigned int	temp;

	temp = nb;
	if (nb < 0)
		temp = neg(nb);
	i = counter(temp);
	while (i != -1)
	{
		i--;
		nbtemp = temp;
		n = 0;
		while (nbtemp > 9 && n <= i)
		{
			nbtemp = nbtemp / 10;
			n++;
		}
		nbtemp = nbtemp % 10;
		nbtemp = nbtemp + '0';
		ft_putchar(nbtemp);
	}
}
/*
int	main(void)
{
	ft_putnbr(INT_MIN);
	ft_putnbr(-2147483647);
}
*/
