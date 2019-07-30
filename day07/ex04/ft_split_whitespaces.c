/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akigler <akigler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 21:57:26 by akigler           #+#    #+#             */
/*   Updated: 2019/07/19 16:08:35 by akigler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
//char **ft_split_whitespaces(char *str);

void ft_count(char *str, int *word, int *letter, int *space)
{
	int i;
	
	i = 0;
	while(str[i])
	{
		if (!(str[i] == 32 || str[i] == 9 || str[i] == 10))
			*letter = *letter + 1;
		else
		{
			if (*letter > 0)
			{
				(*space) += *letter;
				(*word)++;
				*letter = 0;
			}
		}
		i++;
	}
	if (*letter > 0)
		{
			(*word)++;
			(*space) += *letter;
		}
}

int main(void)
{
	int *word;
	int letter;
	int space;
	char str[] = "cheese k";

	*word = 0;
	letter = 0;
	space = 0;
	ft_count(str, word, &letter, &space);
	*arr_space = (*char)malloc(sizeof(char) * (space + word + 0))
	printf("%d %d\n", word, space);
}