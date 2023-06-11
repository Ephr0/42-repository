/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaturzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 09:39:19 by npaturzo          #+#    #+#             */
/*   Updated: 2023/05/27 11:30:20 by npaturzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	check_args(char *str, int input[]);
void print_out(int to_print[][4]);
//void fill(int input[], int output[][4]);

int	main(int argc, char *argv[])
{
	int arg_check;
	int input[16];
	int	output[4][4];

	arg_check = 0;
	if (argc == 2)
		arg_check = check_args(argv[1], input);
	else 
	{
		printf("too many / not enough args\n");
		return (1);
	}
	if (arg_check == 0)
	{
		printf("arg_check failed\n");
		return (2);
	}
	if (arg_check == 1)
		printf("arg_check success!\n");
		
	int test[4][4] = { {2, 3, 1, 4} , {4, 3, 2, 1} , {1, 2, 3, 4} , {1, 1, 1, 1} };
	print_out(test);	
}

//	fill(input);

	//Have output from fill be the values we want to print, then call print_out(out);


	//Step 1, check there is the right number of arguments, and that they are all valid, (ints from 1 - 4).
	//If not print an error message and return
	//
	//Step 2, convert the arguments from string to int, and pass them to the fill algorithm
	//
	//Step 3, fill the grid with the correct buildings
	//
	//Step 4, print the filled grid
	//


