/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhawick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 16:00:20 by lhawick           #+#    #+#             */
/*   Updated: 2020/08/16 20:02:48 by lhawick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_b(int col, int row, int *c_col, int *c_row)
{
	if (*c_row == 1 || *c_row == row)
	{
		ft_putchar('B');
	}
	else if ((*c_row != 1 || *c_row != row) && (*c_col == 1 || *c_col == col))
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
	*c_col += 1;
}

void	print_a(int col, int row, int *c_col, int *c_row)
{
	if (*c_col == 1 && *c_row == 1)
	{
		ft_putchar('A');
		*c_col += 1;
	}
	else if (col != 1 && *c_col == col && *c_row == row)
	{
		ft_putchar('A');
		*c_col += 1;
	}
}

void	print_c(int col, int row, int *c_col, int *c_row)
{
	if ((*c_col == col && *c_row == 1) || (*c_col == 1 && *c_row == row))
	{
		ft_putchar('C');
		*c_col += 1;
	}
	else if (*c_col == 1 && *c_row == row)
	{
		ft_putchar('C');
		*c_col += 1;
	}
}

void	check(int *col, int *row)
{
	if (*col < 0)
	{
		*col = -*col;
	}
	if (*row < 0)
	{
		*row = -*row;
	}
}

void	rush(int col, int row)
{
	int c_col;
	int c_row;

	check(&col, &row);
	c_col = 1;
	c_row = 1;
	while (c_row <= row)
	{
		print_a(col, row, &c_col, &c_row);
		while (c_col <= col)
		{
			print_c(col, row, &c_col, &c_row);
			print_a(col, row, &c_col, &c_row);
			if (c_col != col + 1)
			{
				print_b(col, row, &c_col, &c_row);
			}
		}
		c_col = 1;
		c_row++;
		ft_putchar('\n');
	}
}
