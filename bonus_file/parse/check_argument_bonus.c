/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_argument_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noguen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 20:33:32 by noguen            #+#    #+#             */
/*   Updated: 2022/01/18 00:48:29 by noguen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus_include/so_long_bonus.h"

void	check_argument(t_all *s, char **argv)
{
	int	len;

	len = tool_strlen(argv[1]);
	if (len < 5)
		s->err.n = tool_error(0);
	else
	{
		if (argv[1][len - 4] != '.'
			|| argv[1][len - 3] != 'b'
			|| argv[1][len - 2] != 'e'
			|| argv[1][len - 1] != 'r')
			s->err.n = tool_error(-1);
	}
}
