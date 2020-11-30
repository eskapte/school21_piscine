/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhawick <lhawick@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 22:11:13 by lhawick           #+#    #+#             */
/*   Updated: 2020/08/26 23:32:44 by lhawick          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int lenght, int (*f)(char*))
{
	int cnt;
	int i;

	cnt = 0;
	i = 0;
	while (i < lenght)
	{
		if (f(tab[i]) != 0)
		{
			cnt++;
			i++;
		}
		else
			i++;
	}
	return (cnt);
}