/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchuluun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 10:02:03 by bchuluun          #+#    #+#             */
/*   Updated: 2023/06/08 10:15:31 by bchuluun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	ft_str_length(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*empty_str;
	int		total_length;
	int		i;
	char	*result;

	empty_str = (char *)malloc(sizeof(char));
	empty_str[0] = '\0';
	if (size == 0)
		return (empty_str);
	total_length = 0;
	i = 0;
	while (i < size)
		total_length += ft_str_length(strs[i++]);
	total_length += (size - 1) * ft_str_length(sep);
	result = (char *)malloc((total_length + 1) * sizeof(char));
	result[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i != size - 1)
			ft_strcat(result, sep);
		i++;
	}
	return (result);
}
