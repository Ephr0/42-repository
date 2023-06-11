/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchuluun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 10:38:26 by bchuluun          #+#    #+#             */
/*   Updated: 2023/05/26 11:50:56 by bchuluun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		else
			i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
	char	i[] = "AB";
	char	a[] = "ABC";
	int	b;

	b = ft_strcmp(i, a);
	printf("%i", b);
}
*/
