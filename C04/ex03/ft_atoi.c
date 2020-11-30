/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhawick <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 21:09:57 by lhawick           #+#    #+#             */
/*   Updated: 2020/08/17 22:03:52 by lhawick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		cnt_minuses(char *str)
{
	int cnt;

	cnt = 0;
	while (*str != '\0')
	{
		if (*str == '-')
		{
			cnt++;
		}
		else if (*str == '+' || *str == ' ')
		{
			continue ;
		}
		else
		{
			break ;
		}
		str++;
	}
	return (cnt);
}

int		ft_atoi(char *str)
{
	int cnt_min;
	int res;

	res = 0;
	cnt_min = cnt_minuses(str);
	while (*str != '\0')
	{
		if ((*str >= 65 && *str <= 90) || (*str >= 97 && *str <= 122))
		{
			break ;
		}
		else if (*str >= 48 && *str <= 57)
		{
			res = res * 10 + (*str - 48);
		}
		str++;
	}
	if (!(cnt_min % 2 == 0))
	{
		res = -res;
	}
	return (res);
}
