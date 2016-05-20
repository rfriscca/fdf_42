/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfriscca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/26 15:27:00 by rfriscca          #+#    #+#             */
/*   Updated: 2016/05/20 15:48:03 by rfriscca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		test_file(t_line *list)
{
	int	i;

	i = 0;
	while (list)
	{
		while (list->line[i])
		{
			if (list->line[i] != ' ' &&
				ft_isdigit(list->line[i]) == 0)
				return (0);
			++i;
		}
		i = 0;
		list = list->next;
	}
	return (1);
}
