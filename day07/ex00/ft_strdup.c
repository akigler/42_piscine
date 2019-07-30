/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akigler <akigler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 21:40:24 by akigler           #+#    #+#             */
/*   Updated: 2019/07/17 23:20:08 by akigler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	str = (char*)malloc((i + 1) * sizeof(char));
	while (j <= i)
	{
		str[j] = src[j];
		j++;
	}
	str[j] = '\0';
	return (str);
}
