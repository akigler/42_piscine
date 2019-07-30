/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akigler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 10:03:08 by akigler           #+#    #+#             */
/*   Updated: 2019/07/11 20:57:58 by akigler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char one, char ten, char hun)
{
	ft_putchar(hun);
	ft_putchar(ten);
	ft_putchar(one);
	if (hun != '7')
	{
		ft_putchar(',');
	}
	ft_putchar(' ');
}

void	ft_print_comb(void)
{
	char one;
	char ten;
	char hun;

	hun = '0';
	while (hun <= '9')
	{
		ten = hun + 1;
		while (ten <= '9')
		{
			one = ten + 1;
			while (one <= '9')
			{
				ft_print(one, ten, hun);
				one++;
			}
			ten++;
		}
		hun++;
	}
}
