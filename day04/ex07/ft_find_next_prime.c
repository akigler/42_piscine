/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akigler <akigler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 21:21:31 by akigler           #+#    #+#             */
/*   Updated: 2019/07/13 21:54:24 by akigler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
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

int		ft_find_next_prime(int nb)
{

	while (ft_is_prime(nb) != 1)
	{
		nb++;
	}
	return (nb);
}

int main(void)
{
	printf("%d\n", ft_find_next_prime(3));
}