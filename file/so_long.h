/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogeun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 23:24:35 by nogeun            #+#    #+#             */
/*   Updated: 2021/10/10 21:02:30 by nogeun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdlib.h>
# include <string.h>
# include <stdio.h>
# include "mlx/mlx.h"
# include "gnl/get_next_line.h"

typedef struct		s_mlx {
	void			*ptr;
}					t_mlx;

typedef struct		s_win {
	void			*ptr;
	int				**buf;
	int				x;
	int				y;
}					t_win;

typedef struct		s_img {
	void			*ptr;
	int				*data;

	int				width;
	int				height;
	int				size_l;
	int				bpp;
	int				endian;
}					t_img;

typedef struct		s_map {
	char			**map;
	int				x;
	int				y;
	int				mapx;
	int				mapy;
	int				spr;
}					t_map;

typedef struct		s_tex {
	int				*player[4];
	int				*enemy[4];
	int				*sand;
	int				*wall;
}					t_tex;

typedef struct		s_err {
	int				n;
	int				p;
}					t_err;

typedef struct		s_all {
	t_mlx			mlx;
	t_win			win;
	t_img			img;
	t_map			map;
	t_tex			tex;
	t_err			err;
}					t_all;

/*about init*/
void			init_variables(t_all *s);
void			init_screen(t_all *s, char **argv);
void			init_loop(t_all *s);
void			init_so_long(t_all *s, char** argv);

/*about tex*/
void			*tex_input_xpm(t_all *s, char *file);
void			tex_input(t_all *s);

/*about parse*/
void			parse_longest_line(t_all *s, char *map);
int				parse_set_map(t_all *s);
int				parse_intput_map(t_all *s, char *line, int *j);
int				parse(t_all *s, char *map);

/*about tool*/
int				tool_strlen(char* line);

/*about draw*/
void			draw_put_image(t_all *s, void *img_ptr, int x, int y);
void			draw(t_all *s);

#endif
