/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaturzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 13:32:20 by npaturzo          #+#    #+#             */
/*   Updated: 2023/06/06 15:15:38 by bchuluun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <unistd.h>
# include <limits.h>
# include <stdlib.h>
# include <fcntl.h>

struct s_dict {
	int		i;
	char	n[20];
};

void			error(void);

void			dict_error(void);

long			ft_atoi(char *str);

struct s_dict	*open_dict(char *dict_file, int *dlen);

int				write_output(struct s_dict *dic, long input, int pos);

#endif
