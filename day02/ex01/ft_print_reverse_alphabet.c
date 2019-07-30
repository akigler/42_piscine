/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akigler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 20:14:34 by akigler           #+#    #+#             */
/*   Updated: 2019/07/11 20:51:39 by akigler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int i;

	i = 'z' - 'a';
	while (i >= 0)
	{
		ft_putchar('a' + i);
		i--;
	}
	ft_putchar('\n');
}
