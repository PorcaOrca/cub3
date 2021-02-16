/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prova.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lodovico <lodovico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 10:40:03 by lodovico          #+#    #+#             */
/*   Updated: 2021/02/16 17:58:38 by lodovico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include "cub3.h"

int		main()
{
	void	*mlx_ptr;
	void	*mlx_win;
	int		x = 0;
	int		y = 0;
	double	shade = 1;
	int		trgb;
	
	mlx_ptr = mlx_init();
	mlx_win = mlx_new_window(mlx_ptr, 1000, 500, "ok. now run");
	while (y < 500)
	{
		x = 0;
		trgb = ft_color(0, 255, 0, 0);
		//trgb = ft_invert(trgb);
		trgb = ft_shade(trgb, shade);
		while (x < 1000)
		{
			mlx_pixel_put(mlx_ptr, mlx_win, x, y, trgb);
			x++;
		}
		shade -= 0.002;
		y++;
	}
	mlx_loop(mlx_ptr);
	return (0);
}