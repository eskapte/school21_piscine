/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhawick <lhawick@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 18:01:56 by lhawick           #+#    #+#             */
/*   Updated: 2020/08/24 18:19:25 by lhawick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 4096

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int		main(int argc, char *argv[])
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (argc == 1)
		ft_putstr("File name missing\n");
	else if (argc > 2)
		ft_putstr("Too many arguments\n");
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
			ft_putstr("Cannot read file\n");
		else
		{
			ret = read(fd, buf, BUF_SIZE);
			if (ret < 0)
				ft_putstr("Cannot read file\n");
			buf[ret] = '\0';
			ft_putstr(buf);
			close(fd);
		}
	}
	return (0);
}
