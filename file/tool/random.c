/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   random.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noguen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 12:14:19 by noguen            #+#    #+#             */
/*   Updated: 2022/01/14 23:04:48 by noguen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    tool_srand(t_all *s, int seed)
{
    s->holdrand = (long)seed;
}

int tool_rand(t_all *s)
{
    s->holdrand = s->holdrand * 214013L + 2531011L;
    return ((s->holdrand >> 16) & 0x7fff);
}