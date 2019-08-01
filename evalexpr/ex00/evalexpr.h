/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   evalexpr.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akigler <akigler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 21:30:10 by akigler           #+#    #+#             */
/*   Updated: 2019/07/28 20:49:59 by akigler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVALEXPR_H
# define EVALEXPR_H
#include <unistd.h>
#include <stdlib.h>

typedef	struct		s_expr
{
	int				num;
	int				is_mod;
	struct s_expr	*next;
	char			mod;
}					t_eval;

typedef	struct		s_mod
{
	char			opp;
	struct	s_mod	*next;
}					t_mod;

int		mods_check(char str, char *mods);
int		num_check(char str);
int		eval_expr(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_print_big_list(t_eval **begin_list);
int		ft_atoi(char *str);
t_eval	*ft_create_elem(int num, int is_mod, char mod);
void	ft_list_push_front(t_eval **begin_list, int num, int is_mod, char mod);

void	ft_print_small_list(t_eval **begin_list);
t_eval	*ft_create_mod(char mod);
void	ft_mod_push_front(t_eval **begin_list_small, char mod);

#endif