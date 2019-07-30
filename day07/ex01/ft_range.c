/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akigler <akigler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 11:01:37 by akigler           #+#    #+#             */
/*   Updated: 2019/07/18 15:26:53 by akigler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*ptr;
	int		i;
	long	temp;

	i = 0;
	temp = max - min;
	if (temp > 2147483647)
		return (0);
	else if (min >= max)
		return (0);
	else
	{
		ptr = (int*)malloc((max - min) * sizeof(int));
		while (i < max - min)
		{
			ptr[i] = min + i;
			i++;
		}
		return (ptr);
	}
}
