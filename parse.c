/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogeun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 22:37:51 by nogeun            #+#    #+#             */
/*   Updated: 2021/07/16 22:55:22 by nogeun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void longest_line()
{
	int fd;

	fd = open(cub, O_RDONLY);
	if (fd == -1)
		printf("error");

}
