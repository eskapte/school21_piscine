/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhawick <lhawick@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 18:40:01 by lhawick           #+#    #+#             */
/*   Updated: 2020/08/25 20:37:50 by lhawick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <sys/errno.h>
#include <string.h>
#include <libgen.h>

void	ft_putstr_err(char *str)
{
	while (*str != '\0')
	{
		write(2, str, 1);
		str++;
	}
}

void	s_error(char *file, char *p_name)
{
	ft_putstr_err(basename(p_name));
	ft_putstr_err(": ");
	ft_putstr_err(file);
	ft_putstr_err(": ");
	ft_putstr_err(strerror(errno));
	ft_putstr_err("\n");
}

void	ft_cat(char *file, char *p_name)
{
	int		fd;
	int		fr;
	char	symb;

	fd = open(file, O_RDONLY);
	if (fd == -1)
		s_error(file, p_name);
	else
	{
		fr = read(fd, &symb, 1);
		if (fr == -1)
			s_error(file, p_name);
		else
		{
			write(1, &symb, 1);
			while (read(fd, &symb, 1))
				write(1, &symb, 1);
		}
	}
	close(fd);
}

int		main(int argc, char *argv[])
{
	int		c_pam;
	char	symb;

	if (argc < 2)
	{
		while (read(0, &symb, 1))
			write(1, &symb, 1);
		return (0);
	}
	else
	{
		c_pam = 1;
		while (c_pam < argc)
			ft_cat(argv[c_pam++], argv[0]);
	}
	return (0);
}
