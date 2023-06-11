/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchuluun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 19:09:39 by bchuluun          #+#    #+#             */
/*   Updated: 2023/05/26 11:57:16 by bchuluun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
#include <unistd.h>

void	ft_putstr(char *str)
{
	char	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		write(1, (str + i), 1);
		i ++;
	}
}
/*
int	main(void)
{
	char	a[] = "Hello";
	a = &a[0]
	ft_putstr(a);
}
*/
