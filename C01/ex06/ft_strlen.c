/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchuluun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 19:35:11 by bchuluun          #+#    #+#             */
/*   Updated: 2023/05/26 11:57:49 by bchuluun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
/*#include <unistd.h>*/

int	ft_strlen(char *str)
{
	char	count;

	count = 0;
	while (*(str + count) != '\0')
		count ++;
	return (count);
}
/*
int	main(void)
{
	char	str[] = "hello";

	printf("%d", ft_strlen(str));
	return(0);
}
*/
