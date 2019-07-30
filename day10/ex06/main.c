/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akigler <akigler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 19:03:17 by akigler           #+#    #+#             */
/*   Updated: 2019/07/23 21:52:53 by akigler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "do-op.h"

int	atoi(char *str)
{
	int neg;
	int num;
	int i;

	i = 0;
	neg = 1;
	num = 0;
	while (str[i] <= ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			neg *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	return (num * neg);
}


int error_check(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	
}
int main(int argc, char **argv)
{
	int a;
	int b;
	int count;
	int op_num;
	int (*op_ptr[5])(int, int);
	char oper_array[5] = {'+', '-', '*', '/', '%'};

	op_num = 0;
	count = 0;
	printf("%s\n", "ccc");
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	error_check(argc, argv);
	
	op_ptr[0] = &add;
	op_ptr[1] = &sub;
	op_ptr[2] = &mult;
	op_ptr[3] = &div;
	op_ptr[4] = &mod;
	printf("%s\n", "c");
	while(oper_array[count])
	{
		if (argv[2][0] == oper_array[count])
			{
				op_num = count;
				break ;
			}
		count++;
	}
	printf("%d\n", (op_ptr[count])(a , b));
	if (count == 4 || count == 3)
		return (0);
	return(0);	

}