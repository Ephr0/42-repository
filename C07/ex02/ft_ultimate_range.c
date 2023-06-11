/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchuluun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 13:59:06 by bchuluun          #+#    #+#             */
/*   Updated: 2023/06/05 09:55:39 by bchuluun         ###   ########.fr       */
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
	if (min > max)
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

int	ft_ultimate_range(int **range, int min, int max)
{
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	else
	{
		*range = ft_range(min, max);
		if (*range == NULL)
			return (-1);
		else
			return (max - min);
	}
}
