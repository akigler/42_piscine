/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akigler <akigler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 21:28:41 by akigler           #+#    #+#             */
/*   Updated: 2019/07/24 23:42:36 by akigler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

t_list	*ft_create_elem(void *data);

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

#endif