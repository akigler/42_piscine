/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterative_factorial.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akigler <akigler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 10:26:37 by akigler           #+#    #+#             */
/*   Updated: 2019/07/13 20:20:28 by akigler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int fact;

	if (nb < 0)
	{
		return (0);
	}
	fact = 1;
	while (nb > 0)
	{
		fact * nb;
	}
	return (fact);
}
