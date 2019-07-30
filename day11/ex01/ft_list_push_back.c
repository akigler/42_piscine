/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akigler <akigler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 13:14:26 by akigler           #+#    #+#             */
/*   Updated: 2019/07/24 23:37:35 by akigler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data);

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *add_list;

	add_list = *begin_list;
	if (add_list)
	{
		while (add_list->next)
		{
			add_list = add_list->next;
		}
		add_list->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
