/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchuluun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 13:08:28 by bchuluun          #+#    #+#             */
/*   Updated: 2023/06/05 18:05:44 by bchuluun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	temp;
	int	i;
	int	*array;

	temp = min;
	i = 0;
	if (min >= max)
		return (NULL);
	while (temp < max)
	{
		i++;
		temp++;
	}
	array = (int *)malloc(i * sizeof(int));
	temp = min;
	i = 0;
	while (temp < max)
	{
		array[i] = temp;
		i++;
		temp++;
	}
	return (array);
}
/*
int	main(void)
{
	int	*a;
	int	i;

	i = 0;
	a = ft_range(0, 5);
	while (i < 5)
	{
		printf("%i", a[i]);
		i++;
	}
}*/
