/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchuluun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:55:15 by bchuluun          #+#    #+#             */
/*   Updated: 2023/05/25 16:38:33 by bchuluun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	s;
	int	c;
	char	found;

	c = 0;
	i = 0;
	s = 0;
	while (str[i] != '\0')
	{
		while (str[i] == to_find[s])
		{
			found[s] = to_find[s];
			s++;
			i++;
			c++;
			if (str[i] != to_find[s] && c < s)
			{
				s = 0;
				found = 0;
			}
		}
	}
	found[s + 1] = '\0';
	return (found);
}
/*
#include <stdio.h>
int main(void)
{
	char	str[50] = "How are you ay";
	char	to_find[] = "ay";

	printf("%s", ft_strstr(str, to_find));
}
*/
