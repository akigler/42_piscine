/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akigler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 11:37:23 by akigler           #+#    #+#             */
/*   Updated: 2019/07/11 16:34:48 by akigler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb2(void);

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print(char tho, char hun, char ten, char one)
{
	ft_putchar(tho);
	ft_putchar(hun);
	ft_putchar(' ');
	ft_putchar(ten);
	ft_putchar(one);
	if (hun == '8' && tho == '9' && ten == '9' && one == '9')
	{
	}
	else
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{

	char one;
	char ten;
	char hun;
	char tho;

	one = '0';
	ten = '0';
	hun = '0';
	tho = '0';

	/*while loops for output*/
	while (tho <= '9')
	{
		while (hun <= '9')
		{
			while (ten <= '9')
			{
				while (one <= '9')
				{
					ft_print(tho, hun, ten, one);
					one++;
				}	
				one = hun + 1;
				ten++;
			}
		ten = tho;
		one ++;
		hun++;	
		}
	hun = tho - 1;
	tho++;
	}
}

int		main(void)
{
	ft_print_comb2();
	return (0);
}
