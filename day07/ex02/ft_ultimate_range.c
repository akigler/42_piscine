/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akigler <akigler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 12:39:56 by akigler           #+#    #+#             */
/*   Updated: 2019/07/18 16:55:09 by akigler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		*ft_range(int min, int max)
{
	int		*ptr;
	int		i;
	long	temp;

	i = 0;
	temp = max;
	temp -= min;
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

int		ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (*range)
		return (max - min);
	else
		return (0);
}
