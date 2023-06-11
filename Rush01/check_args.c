/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaturzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 10:27:44 by npaturzo          #+#    #+#             */
/*   Updated: 2023/05/27 11:40:42 by npaturzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_args(char *str, int input[])
{
	int		count;
	int		i;
	char	*start;

	start = str;
	i = 0;
	count = 0;
	while (*str)
	{
		if (*str < '1' && *str != ' ' || *str > '4')
			return (0);
		if (*str >= '1' && *str <= '4')
			count++;
		str++;
	}
	if (count != 16)
		return (0);
	while (i < 16)
	{	
		input[i] = *start - '0';
		start += 2;
		i++;
	}	
	return (1);
}
