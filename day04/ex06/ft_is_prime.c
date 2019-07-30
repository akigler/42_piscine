/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akigler <akigler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 19:08:12 by akigler           #+#    #+#             */
/*   Updated: 2019/07/13 20:18:35 by akigler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		max(int num)
{
	int		i;
	int		sqrt;

	while (sqrt < num - 1)
	{
		sqrt = i * i;
		i++;
	}
	return (i);
}

int		ft_is_prime(int nb)
{
	int		sqrt;

	if (nb <= 1)
	{
		return (0);
	}
	sqrt = max(nb);
	while (sqrt > 1)
	{
		if (nb % sqrt == 0)
		{
			return (0);
		}
		sqrt--;
	}
	return (1);
}
