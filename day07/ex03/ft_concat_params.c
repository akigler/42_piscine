/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akigler <akigler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 16:57:18 by akigler           #+#    #+#             */
/*   Updated: 2019/07/18 17:37:17 by akigler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		arg_len(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;

	j = 0;
	i = 0;
	k = 0;
	while (i < argc)
	{
		while (argv[i][j])
			j++;
		i++;
		k += j;
		j = 0;
	}
	return (k);
}

char	*out(int argc, char **argv, int param_len)
{
	int		i;
	int		j;
	int		k;
	char	*string;

	*string = (char*)malloc(sizeof(char) * (param_len + argc));
	j = 0;
	i = 0;
	k = 0;
	while (i < argc)
	{
		while (argv[i][j])
		{
			string[k + j] = argv[i][j];
			j++;
		}
		i++;
		k += j;
		if (argc - i > 0)
		{
			string[k++] = '\n';
		}
		j = 0;
	}
	return (string);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		param_len;
	char	*output;

	param_len = arg_len(argc, argv);
	output = out(argc, argv, param_len);
	return (output);
}
