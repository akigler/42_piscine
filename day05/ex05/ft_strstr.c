/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akigler <akigler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 12:07:17 by akigler           #+#    #+#             */
/*   Updated: 2019/07/16 21:30:10 by akigler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int spot;

	i = 0;
	j = 0;
	spot = 0;
	if (to_find[0] == '\0')
		return (&str[0]);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			spot = i;
			while (str[i] == to_find[j])
			{
				if (to_find[j] == '\0')
					return (&str[spot]);
				i++;
				j++;
			}
		}
		i++;
	}
	return (0);
}
