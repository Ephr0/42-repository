/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchuluun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 11:02:56 by bchuluun          #+#    #+#             */
/*   Updated: 2023/05/30 15:56:13 by bchuluun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
int	counter(char s3, char s4)
{
	int	i;
	int a;
	i = 0;
	a = 0;
	while
*/
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
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
	char	i[] = "aaaaa";
	char	a[] = "aaaaz";
	int	b;
	unsigned int c = 5;

	b = ft_strncmp(i, a, c);
	printf("%i", b);
}
*/
