/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhawick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 17:59:30 by lhawick           #+#    #+#             */
/*   Updated: 2020/08/20 16:58:40 by lhawick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int cnt;

	cnt = 0;
	while (*str != '\0')
	{
		cnt++;
		str++;
	}
	return (cnt);
}

void	change(char *argv[], int i)
{
	char *c;

	i = 0;
	while (*argv[i] != '\0' && *argv[i + 1] != '\0')
	{
		if (*argv[i] > *argv[i + 1])
		{
			c = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = c;
			break ;
		}
		else if(*argv[i] < *argv[i + 1])
			break ;
		argv[i]++;
		argv[i + 1]++;
	}
}

int		main(int argc, char *argv[])
{
	int i;

	i = 1;
	while (i < argc)
	{
		if (i == argc - 1)
		{
			write(1, argv[i], ft_strlen(argv[i]));
			break ;
		}
		change(argv, i);
		write(1, argv[i], ft_strlen(argv[i]));
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
