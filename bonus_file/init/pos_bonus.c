/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pos_bonus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noguen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 00:13:28 by noguen            #+#    #+#             */
/*   Updated: 2022/01/18 00:47:44 by noguen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus_include/so_long_bonus.h"

void	pos_player(t_all *s)
{
	int		i;
	int		j;

	i = -1;
	while (++i < 10)
	{
		j = -1;
		while (++j < 20)
		{
			if (s->map.sup[i][j] == 'P')
			{
				s->player.pos_y = i * 64 + 32;
				s->player.pos_x = j * 64 + 32;
			}
		}
	}
}
