/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akigler <akigler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 12:13:51 by akigler           #+#    #+#             */
/*   Updated: 2019/07/14 12:59:47 by akigler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		first_line(int count_x, int count_y, int a)
{
	if (count_y == 1)
	{
		if (count_x == 1)
		{
			ft_putchar('/');
		}
		else if (a - count_x == 0)
		{
			ft_putchar('\\');
		}
		else
		{
			ft_putchar('*');
		}
	}
	return (0);
}

void	mid_line(int count_x, int count_y, int a, int b)
{
	if (count_y > 1 && count_y < b)
	{
		if (count_x == 1)
		{
			ft_putchar('*');
		}
		else if (a - count_x == 0)
		{
			ft_putchar('*');
		}
		else
		{
			ft_putchar(' ');
		}
	}
}

void	last_line(int count_x, int count_y, int a, int b)
{
	if (count_y == b && b > 1)
	{
		if (count_x == 1)
		{
			ft_putchar('\\');
		}
		else if (a - count_x == 0)
		{
			ft_putchar('/');
		}
		else
		{
			ft_putchar('*');
		}
	}
}

void	write_line(int count_x, int count_y, int a, int b)
{
	while (count_y <= b)
	{
		while (count_x <= a)
		{
			first_line(count_x, count_y, a);
			mid_line(count_x, count_y, a, b);
			last_line(count_x, count_y, a, b);
			count_x++;
		}
		count_x = 1;
		ft_putchar('\n');
		count_y++;
	}
}

int		rush(int a, int b)
{
	int		count_x;
	int		count_y;

	count_x = 1;
	count_y = 1;
	write_line(count_x, count_y, a, b);
	return (0);
}
