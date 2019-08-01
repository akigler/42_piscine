/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akigler <akigler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 14:18:44 by akigler           #+#    #+#             */
/*   Updated: 2019/07/28 21:14:57 by akigler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "evalexpr.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * (-1);
	}
	if (nb >= 10)
	{
		ft_putnbr((nb / 10));
	}
	ft_putchar((nb % 10) + '0');
}

void	ft_print_big_list(t_eval **begin_list)
{
	t_eval *temp;
	temp = *begin_list;
	while(temp)
	{
		if (((temp)->is_mod) == 1)
		{
			ft_putchar((temp)->mod);
		}
		else if ((temp)->is_mod == 0)
		{
			ft_putnbr((temp)->num);
		}
		temp = temp->next;
	}
}

void	ft_print_small_list(t_eval **begin_list)
{
	t_eval *temp;
	temp = *begin_list;
	while(temp)
	{
		ft_putchar(temp->mod);
		temp = temp->next;
	}
}