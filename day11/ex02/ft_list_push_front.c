/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akigler <akigler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 20:39:10 by akigler           #+#    #+#             */
/*   Updated: 2019/07/24 23:40:50 by akigler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*link;

	link = ft_create_elem(data);
	link->next = *begin_list;
	*begin_list = link;
}
