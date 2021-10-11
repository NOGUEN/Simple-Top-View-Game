/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogeun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 00:28:14 by nogeun            #+#    #+#             */
/*   Updated: 2021/10/12 00:49:48 by nogeun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int		key_pressed(int k, t_all *s)
{
	if (k == KEY_W)
		s->key.w = 1;
	else if (k == KEY_A)
		s->key.a = 1;
	else if (k == KEY_S)
		s->key.s = 1;
	else if (k == KEY_D)
		s->key.d = 1;
	return (0);
}

int		key_released(int k, t_all *s)
{
	if (k == KEY_W)
		s->key.w = 0;
	else if (k == KEY_A)
		s->key.a = 0;
	else if (k == KEY_S)
		s->key.s = 0;
	else if (k == KEY_D)
		s->key.d = 0;
	return (0);
}

int		key_update(t_all *s)
{
	if (s->key.w == 1) {
		printf("yoho\n");
		printf("%d\n", s->win.frame);
	}
	return (0);
}