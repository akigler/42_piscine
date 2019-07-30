/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akigler <akigler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 22:41:41 by akigler           #+#    #+#             */
/*   Updated: 2019/07/24 23:21:57 by akigler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_LIST_H__
#define __FT_LIST_H__

#include <stdlib.h>
typedef struct s_list
{
	struct s_list *next;
	void *data;
} t_list;
#endif

