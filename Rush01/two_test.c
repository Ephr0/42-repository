void	print_out(int to_print[][4]);
void	two_fill(int input[], int out[][4]);

int	main(void)
{
	int in[16] = {4, 3, 2, 1, 1, 2, 2, 2, 4, 3, 2, 1, 1, 2, 2, 2};
				//0, 1, 2, 3, 4, 5, 6, 7, 8, 9,10,11,12,13,14,15
	int out[4][4] = { {1, 2, 3, 4} , {2, 0, 0, 0} , {3, 0, 0, 0} , {4, 0, 0, 0} };

	two_fill(in, out);

	print_out(out);

}

