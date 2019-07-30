/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akigler <akigler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 20:14:14 by akigler           #+#    #+#             */
/*   Updated: 2019/07/25 23:23:43 by akigler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		err(char **argv, int i)
{
	if (errno == 2)
	{
		ft_putstr("cat:  ");
		ft_putstr(argv[i]);
		ft_putstr(":  No such file or directory\n");
		return (1);
	}
	if (errno == 21)
	{
		ft_putstr("cat: ");
		ft_putstr(argv[i]);
		ft_putstr(": Is a directory\n");
		return (1);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		fd;
	int		i;
	char	c;

	i = 1;
	if (argc == 1)
		while (read(0, &c, 1))
			write(1, &c, 1);
	while (i < argc)
	{
		fd = (open(argv[i], O_RDONLY));
		if (err(argv, i) == 1)
			return (1);
		while ((read(fd, &c, 1)))
		{
			if ((err(argv, i)) == 1)
				return (1);
			write(1, &c, 1);
		}
		ft_putchar('\n');
		close(fd);
		i++;
	}
	return (0);
}
