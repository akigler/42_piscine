/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akigler <akigler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 16:33:27 by akigler           #+#    #+#             */
/*   Updated: 2019/07/16 00:10:46 by akigler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		calc(char *str, int count, int *sign, int nb)
{
	int result;

	result = 0;
	while (str[count] != '\0')
	{
		while (str[count] == ' ')
			count++;
		if (str[count] == '+' || str[count] == '-')
		{
			*sign = (str[count] == '-') ? 1 : 0;
			count++;
		}
		if (str[count] >= 48 && str[count] <= 57)
		{
			result += str[count] - '0';
			result *= 10;
			count++;
		}
		else
			break ;
	}
	return (result);
}

int		ft_atoi(char *str)
{
	int count;
	int sign;
	int nb;
	int result;

	count = 0;
	sign = 0;
	result = calc(str, count, &sign, nb);
	if (sign == 0)
		return (result / 10);
	else
		return (-result / 10);
}
