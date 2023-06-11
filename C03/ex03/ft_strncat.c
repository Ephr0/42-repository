/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchuluun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:33:41 by bchuluun          #+#    #+#             */
/*   Updated: 2023/05/26 10:48:55 by bchuluun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	s;

	i = 0;
	s = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[s] != '\0' && s < nb)
	{
		dest[i] = src[s];
		i++;
		s++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int main(void)
{
	char	dest[50] = "birdis";
	char	src[] = " theword";
	unsigned int a = 3;

	printf("%s", ft_strncat(dest, src, a));
}
*/
