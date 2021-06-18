/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassaak <mmassaak@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 00:36:02 by mmassaak          #+#    #+#             */
/*   Updated: 2021/04/12 00:36:10 by mmassaak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_box(int vector_box[4][4])
{
	int i;
	int j;
	char current_value;

	i = 0;
	while(i < 4)
	{
		j = 0;
		while(j < 4)
		{
			current_value = vector_box[i][j] + '0';
			write(1, &current_value, 1);
			if(j < 3)
			{
				write(1, " ", 1);
			}
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void fill_line_left_when_four(int vector_box[4][4],int *line_restrictions)
{
	int i;
	int j;

	i = 0;

	while(i < 4)
	{
		if (line_restrictions[i] == 4)
		{
			j=0;
			while(j < 4)
			{
				vector_box[i][j] = j+1;
				j++;
			}
		}
		i++;
	}
}

void fill_line_right_when_four(int vector_box[4][4], int *line_restrictions)
{
	int i;
	int j;

	i = 4;
	while(i < 8)
	{
		if (line_restrictions[i] == 4)
		{
			j=0;
			while(j < 4)
			{
				vector_box[i-4][j] = 4-j;
				j++;
			}
		}
		i++;
	}
}

void fill_column_up_when_four(int vector_box[4][4], int *column_restrictions)
{
	int i;
	int j;

	i = 0;
	while(i < 4)
	{
		if (column_restrictions[i] == 4)
		{
			j=0;
			while(j < 4)
			{
				vector_box[j][i] = j+1;
				j++;
			}
		}
		i++;
	}
}

void fill_col_up_when_one(int vector_box[4][4],int *column_restrictions)
{
	int i;

	i = 0;
	while(i < 4)
	{
		if (column_restrictions[i] == 1)
			vector_box[0][i] = 4;
		i++;
	}
}

void fill_col_down_when_one(int vector_box[4][4],int *column_restrictions)
{
	int i;

	i = 4;
	while(i < 8)
	{
		if (column_restrictions[i] == 1)
			vector_box[3][i-4] = 4;
		i++;
	}
}


void find_one_line_left(int vector_box[4][4], int *line_restrictions)
{
	int i;

	i = 0;
	while(i < 4)
	{
		if (line_restrictions[i] == 1)
		{
			vector_box[i][0] = 4;
		}
		i++;
	}
}

void find_one_line_right(int vector_box[4][4], int *line_restrictions)
{
	int i;

	i = 4;
	while(i < 8)
	{		
		if (line_restrictions[i] == 1)
		{
			vector_box[i-4][3] = 4;
		}
		i++;
	}
}

void fill_line_four_to_tree_set_four(int vector_box[4][4], int* line_restrictions)
{
	int restriction;
	int i;

	while(i < 4)
	{
		if(line_restrictions[i] == 3 && line_restrictions[i+4]==2)
			vector_box[i][2] = 4;
		if(line_restrictions[i] == 2 && line_restrictions[i+4]==3)
			vector_box[i][1] = 4;
	}
}

void fill_column_four_to_tree_set_four(int vector_box[4][4], int* column_restrictions)
{
	int restriction;
	int i;

	i = 0;
	while(i < 4)
	{
		if(column_restrictions[i] == 3 && column_restrictions[i+4]==2)
		{
			vector_box[2][i] = 4;
		}
			
		if(column_restrictions[i] == 2 && column_restrictions[i+4]==3)
		{
			vector_box[1][i] = 4;
		}
		i++;
	}
}


int	main(void)
{
	// int vector_box[16] = {{1, 2, 3, 4}, {2, 3, 4, 1}, {3, 4, 1, 2}, {4, 1, 2, 3}};
	int vector_box[4][4] = {0};
	int line_restrictions[8] = {3, 3, 1, 2, 1, 2, 2, 3};
	int column_restrictions[8] = {2, 3, 2, 1, 2, 1, 2, 3};

	fill_line_left_when_four(vector_box, line_restrictions);
	fill_line_right_when_four(vector_box, line_restrictions);
	find_one_line_left(vector_box, line_restrictions);
	find_one_line_right(vector_box, line_restrictions);

	fill_column_up_when_four(vector_box, column_restrictions);
	fill_col_up_when_one(vector_box, column_restrictions);
	fill_col_down_when_one(vector_box, column_restrictions);

	//3-2 && 2-3 : 4 é obrigatoriamente em i=2 a partir da origem 3
	fill_line_four_to_tree_set_four(vector_box, line_restrictions);
	fill_column_four_to_tree_set_four(vector_box, column_restrictions);

	print_box(vector_box);

	return (0);
}


