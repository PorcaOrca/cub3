/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lodovico <lodovico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 10:46:14 by lodovico          #+#    #+#             */
/*   Updated: 2021/02/17 09:06:12 by lodovico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3_H
# define CUB3_H

# include <mlx.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct		s_img
{
	void	*ptr;
	char	*addr;
	int		bxp;
	int		sizel;
	int		endian;
}					t_img;

int		ft_color(int t, int r, int g, int b);
int		ft_shade(int trgb, double shade);
int		ft_get_r(int trgb);
int		ft_get_g(int trgb);
int		ft_get_b(int trgb);
int		ft_invert(int trgb);
t_img	*ft_img_init(void *mlx_ptr);
void	ft_img_pixel_put(t_img *img, int x, int y, int color);

#endif