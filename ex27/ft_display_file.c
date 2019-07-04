/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolberg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 10:57:18 by rvolberg          #+#    #+#             */
/*   Updated: 2017/11/09 19:42:57 by rvolberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "header.h"

int			ft_putchar(char c)
{
	write(2, &c, 1);
	return (0);
}

void		ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int			ft_check(int argc)
{
	if (argc < 2)
	{
		ft_putstr("File name missing.\n");
		return (0);
	}
	if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (0);
	}
	return (1);
}

int			main(int argc, char **argv)
{
	int		op;
	int		path;
	char	buf[BUF_SIZE + 1];
	int		wr;

	wr = 0;
	path = 1;
	op = 0;
	if ((ft_check(argc)) == 0)
		return (0);
	op = open(argv[path], O_RDONLY);
	if (op == -1)
	{
		ft_putstr("open() failed\n");
		return (1);
	}
	write(1, buf, (read(op, buf, BUF_SIZE)));
	if (close(op) == -1)
	{
		ft_putstr("close() failed\n");
		return (1);
	}
	return (0);
}
