/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_check_map2_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noguen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 15:28:12 by noguen            #+#    #+#             */
/*   Updated: 2022/01/19 15:41:03 by noguen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus_include/so_long_bonus.h"

int	parse_check_multiple(t_all *s, char c)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (++i < s->map.y - 1)
	{
		j = 0;
		while (++j < s->map.x)
		{
			if (s->map.map[i][j] == c)
				count++;
		}
	}
	if (count != 1 && c == 'P')
		return (tool_error(-13));
	if (count != 1 && c == 'E')
		return (tool_error(-14));
	return (1);
}

void	parse_check_multiple_all(t_all *s)
{
	s->err.n = parse_check_multiple(s, 'P');
	s->err.n = parse_check_multiple(s, 'E');
}
