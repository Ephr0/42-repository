/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchuluun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:39:12 by bchuluun          #+#    #+#             */
/*   Updated: 2023/05/30 17:44:32 by bchuluun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	counter(char *str1, int count)
{
	int	i;
	int	b;
	int	ten;

	i = 0;
	b = 0;
	ten = 1;
	while (i < count)
	{
		ten = ten * 10;
		i++;
	}
	i = 0;
	while ((str1[i] < '0' || str1[i] > '9') && str1[i] != '\0')
		i++;
	while ((str1[i] >= '0' && str1[i] <= '9') && str1[i] != '\0')
	{
		b = b + (str1[i] - '0') * ten;
		ten = ten / 10;
		i++;
	}
	return (b);
}

int	check_neg(int b, int s)
{
	if (s % 2 == 1)
		b *= -1;
	return (b);
}

int	ft_atoi(char *str)
{
	int		i;
	int		s;
	int		b;
	int		a;

	i = 0;
	s = 0;
	b = -1;
	while ((str[i] < '0' || str[i] > '9') && (str[i] != '\0'))
	{
		if (str[i] == '-')
			s++;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9') && (str[i] != '\0'))
	{
		i++;
		b++;
	}
	a = check_neg(counter(str, b), s);
	return (a);
}
/*
int	main(void)
{
	printf("%i", ft_atoi("	--1asas"));
}
*/
