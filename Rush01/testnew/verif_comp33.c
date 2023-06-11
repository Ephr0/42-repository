/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif_comp33.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaduc <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 13:04:53 by mchaduc           #+#    #+#             */
/*   Updated: 2023/05/28 13:31:46 by mchaduc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	verif_comp23(int c, int n, int output[][4], int i)
{
	int	res;
	int	count;
	int	comp;

	res = 0;
	res = output[c][n];
	comp = res;
	count = 0;
	while (res != 4)
	{
		res = output[c][n];
		if (comp < res)
		{
			count ++;
			comp = res;
		}
		c++;
	}
	if (count == 1)
	{
		return (1);
	}
	return (0);
}

int	verif_comp27(int c, int n, int output[][4], int i)
{
	int	res;
	int	count;
	int	comp;

	res = 0;
	res = output[c][n];
	comp = res;
	count = 0;
	while (res != 4)
	{
		res = output[c][n];
		if (comp < res)
		{
			count ++;
			comp = res;
		}
		c--;
	}
	if (count == 1)
	{
		return (1);
	}
	return (0);
}

int	verif_comp211(int c, int n, int output[][4], int i)
{
	int	res;
	int	count;
	int	comp;

	res = 0;
	n = 0;
	res = output[c][n];
	comp = res;
	count = 0;
	while (res != 4)
	{
		res = output[c][n];
		if (comp < res)
		{
			count ++;
			comp = res;
		}
		n++;
	}
	if (count == 1)
	{
		return (1);
	}
	return (0);
}

int	verif_comp2max(int c, int n, int output[][4], int i)
{
	int	res;
	int	count;
	int	comp;

	res = 0;
	n = 3;
	res = output[c][n];
	comp = res;
	count = 0;
	while (res != 4)
	{
		res = output[c][n];
		if (comp < res)
		{
			count ++;
			comp = res;
		}
		n--;
	}
	if (count == 1)
	{
		return (1);
	}
	return (0);
}
