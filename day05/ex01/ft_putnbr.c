/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akigler <akigler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 13:45:33 by akigler           #+#    #+#             */
/*   Updated: 2019/07/16 00:10:48 by akigler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	char c;

	if (nb != 0)
	{
		c = '0' + (nb % 10);
		nb = nb / 10;
		ft_putnbr(nb);
		ft_putchar(c);
	}
}
