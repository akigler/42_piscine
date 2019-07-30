/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akigler <akigler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 21:29:51 by akigler           #+#    #+#             */
/*   Updated: 2019/07/18 21:39:46 by akigler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_generic(void)
{
	int		i;
	char	*c;

	*c = "Tut tut ; Tut tut";
	i = 0;
	while (c[i])
	{
		ft_putchar(c[i]);
		i++;
	}
	ft_putchar('\n');
}
