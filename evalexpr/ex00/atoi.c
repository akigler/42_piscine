/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akigler <akigler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 14:59:51 by akigler           #+#    #+#             */
/*   Updated: 2019/07/28 20:25:09 by akigler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "evalexpr.h"

int ft_atoi(char *str)
{
	int res;
	int sign;
	int i;

	i = 0;
	sign = 0;
	res = 0;
	while(str[i] == ' ' || str[i] == '\t' || str[i] == '\f' || str[i] == '\n' ||
		str[i] == '\v' || str[i] == '\r')
		i++;
	if (str[i] == '-')
	{
		sign = 1;
	}
	if (str[i] == '+' || str[i] == '-')
		i++;

	while(str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res += (int)str[i] - '0';
		i++;
	}
	if (sign == 1)
		return (-res);
	else
		return (res);
}