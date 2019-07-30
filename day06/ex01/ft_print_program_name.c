/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akigler <akigler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 15:39:46 by akigler           #+#    #+#             */
/*   Updated: 2019/07/17 21:02:36 by akigler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int		i;
	char	*j;

	i = 0;
	j = argv[0];
	argc = argc - argc;
	while (j[i])
	{
		ft_putchar(j[i]);
		i++;
	}
	return (0);
}
