/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akigler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 16:36:48 by akigler           #+#    #+#             */
/*   Updated: 2019/07/11 18:19:42 by akigler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}


void	ft_putnbr(int nb)
{
	/*find length of digit*/
	int count;
	count = 0;

	int nb_2;
	nb_2 = nb;
	
	while (nb != 0)
	{
		nb /= 10;
		count++;
	}
	/*put in array*/
	char number[count];
	int count_2;
	count_2 = count;

	while (count > 0)
	{
		number[count] = '0' + (nb_2 % 10);
		nb_2/=10;
		count--;
	}
	
	int counter_3;
	counter_3 = 1;
	while (counter_3 <= count_2)
	{
		ft_putchar(number[counter_3]);
		counter_3++;
	}


}

int		main(void)

{
	ft_putnbr(100);
	return (0);
}

