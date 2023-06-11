/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_dict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaker <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 12:42:31 by tbaker            #+#    #+#             */
/*   Updated: 2023/06/04 21:32:42 by bchuluun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_strcpy(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (src[i] == ' ')
		i++;
	while (src[i] != '\n')
	{
		if (*src < ' ' || *src > '~')
			return (0);
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (1);
}

int	sort_dict(struct s_dict *dic, int length)
{
	int				i;
	int				j;
	struct s_dict	temp;

	i = 0;
	while (i < length - 1)
	{
		j = i + 1;
		while (j < length)
		{
			if (dic[i].i == dic[j].i)
				return (0);
			if (dic[i].i > dic[j].i)
			{
				temp = dic[i];
				dic[i] = dic[j];
				dic[j] = temp;
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	read_dict(char *dictstr, struct s_dict *dic)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dictstr[i])
	{
		if (dictstr[i] == '\n' || i == 0)
		{
			dic[j].i = ft_atoi(&dictstr[i]);
		}
		if (dictstr[i] == ':')
		{
			ft_strcpy(dic[j].n, &dictstr[i + 1]);
			j++;
		}
		i++;
	}
	return (j);
}

struct s_dict	*open_dict(char *dict_file, int *dlen)
{
	int				open_ret;
	int				read_ret;
	int				len;
	char			*buffer;
	struct s_dict	*dic;

	buffer = malloc(sizeof(char) * 1000);
	if (dict_file == 0)
	{
		open_ret = open("./numbers.dict", O_RDONLY);
	}
	else
	{
		open_ret = open(dict_file, O_RDONLY);
	}
	read_ret = read(open_ret, buffer, 1000);
	close(open_ret);
	dic = malloc(read_ret * 2);
	len = read_dict(buffer, dic);
	if (len == 0)
		return (0);
	if (sort_dict(dic, len) == 0)
		return (0);
	*dlen = len;
	return (dic);
}
/*
 * atoi for a number, move past spaces until you get to ':'
 * atoi will return (0) if no number, so check after if atoi returns a 0
 * send string position and dictionary to a strcpy
 * strcpy will check for non printables and return a pass (1) or (0) fail
 * if we have a number, but no name, break return dict error
 * if we have a name but no number, break, return error
 * if we have an empty line, move past it and continue
 * then sort the array, from smallest .i at dic[0] to largest at dic[n]
 */
