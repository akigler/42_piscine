/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akigler <akigler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 17:17:04 by akigler           #+#    #+#             */
/*   Updated: 2019/07/13 20:46:15 by akigler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_mid(int start, long end, int ans, int nb)
{
	while (start <= end)
	{
		int mid; 
		mid = (start + end) / 2;

		//if x is perfect sq
		if (mid * mid == nb)
		{
			return (mid);
		}
		if (mid * mid < nb)
		{
			start = mid + 1;
			ans = mid;
		}
		else
		{
			end = mid - 1;
		}
	}
	return (0);
}

int		ft_sqrt(nb)
{
	if (nb == 0 || nb == 1)
	{
		return nb;
	}
	
	int start;
	long end;
	int ans;

	start = 1;
	end = nb/2;
	return(ft_mid(start,end, ans, nb));
}
