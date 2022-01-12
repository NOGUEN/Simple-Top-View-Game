/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pos.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogeun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 12:26:35 by nogeun            #+#    #+#             */
/*   Updated: 2021/12/20 17:39:35 by noguen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	pos_player(t_all *s)
{
	int		i;
	int		j;

	i = -1;
	while (++i < s->map.y)
	{
		j = -1;
		while (++j < s->map.x)
		{
			if (s->map.sup[i][j] == 'P')
			{
				s->player.pos_y = i * 64 + 32;
				s->player.pos_x = j * 64 + 32;
			}
		}
	}
}