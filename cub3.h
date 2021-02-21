/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lodovico <lodovico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 10:46:14 by lodovico          #+#    #+#             */
/*   Updated: 2021/02/21 08:20:53 by lodovico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3_H
# define CUB3_H

# include <mlx.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <time.h>

typedef struct	s_xy
{
	int		x;
	int		y;
}				t_xy;

typedef struct		s_img
{
	void	*ptr;
	char	*addr;
	int		bxp;
	int		sizel;
	int		endian;
}					t_img;

typedef struct		s_param
{
	t_xy	*xy;
	void	*mlx_ptr;
	void	*mlx_win;
	int		da_loop;
	double	shade;
}					t_param;


int		ft_color(int t, int r, int g, int b);
int		ft_shade(int trgb, double shade);
int		ft_get_r(int trgb);
int		ft_get_g(int trgb);
int		ft_get_b(int trgb);
int		ft_invert(int trgb);
t_img	*ft_img_init(void *mlx_ptr, t_xy *img_dim);
void	ft_img_pixel_put(t_img *img, int x, int y, int color);
void	ft_img_fill(t_img *img, t_xy *limit, double shade, int trgb);
int		ft_key_hook(int keycode, t_param *param);
void	ft_img_to_win(t_img *img, void *mlx_ptr, void *mlx_win);
int		ft_close(int keycode, t_param *param);
void	ft_img_push(t_param *param, int trgb);
int		ft_timed_disco(int	keycode, t_param *param);
int		ft_delay(int keycode, t_param param);
int		ft_release(int keycode, t_param *param);
int		ft_next_frame(t_param *param);


#endif