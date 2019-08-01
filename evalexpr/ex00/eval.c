/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akigler <akigler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 16:08:42 by akigler           #+#    #+#             */
/*   Updated: 2019/07/28 21:27:20 by akigler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "evalexpr.h"
t_eval	*ft_create_mod(char mod)
{
	t_eval	*mod_elem;
	mod_elem = (t_eval*)malloc(sizeof(t_eval));
	if(mod_elem)
	{
		mod_elem->next = NULL;
		mod_elem->mod = mod;
		mod_elem->is_mod = 1;
		mod_elem->num = 0;
	}
	return (mod_elem);
}

void	ft_mod_push_front(t_eval **begin_list_small, char mod)
{
	t_eval *mod_elem;
	mod_elem = ft_create_mod(mod);
	mod_elem->next = *begin_list_small;
	*begin_list_small = mod_elem;
}

t_eval	*ft_create_elem(int num, int is_mod, char mod)
{
	t_eval *elem;
	elem = (t_eval*)malloc(sizeof(t_eval));
	if (elem)
	{
		elem->num = num;
		elem->is_mod = is_mod;
		elem->next = NULL;
		elem->mod = mod;
	}
	return (elem);
}

void	ft_list_push_front(t_eval **begin_list, int num, int is_mod, char mod)
{
	t_eval	*elem;
	elem = ft_create_elem(num, is_mod, mod);
	elem->next = *begin_list;
	*begin_list = elem;
}
int mods_check(char str, char *mods)
{
	int i;

	i = 0;
	if (str != '\0')
	{
		while (mods[i])
		{
			if (str == mods[i])
				return (1);
			i++;
		}
	}
	return (0);
}

int num_check(char str)
{
	if (str >= '0' && str <= '9')
		return (1);
	return (0);
}

int eval_expr(char *str)
{
	char mods[6] = {'+', '-', '/', '*', '%', '\0'};
	int i;
	int num;
	t_eval *begin_list_big;
	t_eval *begin_list_small;

	begin_list_big = NULL;
	begin_list_small = NULL;
	//begin_list_big = (t_eval*)malloc(sizeof(t_eval) + 1000);
	i = 0;
	while (str[i])
	{
		if (num_check(str[i]) == 1)
		{
			num = atoi(&str[i]);
			while(str[i] && str[i] >= '0' && str[i] <= '9')
				i++;
			ft_list_push_front(&begin_list_big, num, 0, '\0');
		}
		else if ((mods_check(str[i], mods)) == 1)
		{
			ft_mod_push_front(&begin_list_small, str[i]);
			i++;
		}
		else
			i++;
	}
	ft_print_big_list(&begin_list_big);
	ft_print_small_list(&begin_list_small);

	return(0);
}