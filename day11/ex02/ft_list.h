/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akigler <akigler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 20:39:10 by akigler           #+#    #+#             */
/*   Updated: 2019/07/24 23:39:51 by akigler          ###   ########.fr       */
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