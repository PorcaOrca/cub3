/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prova.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lodovico <lodovico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 10:40:03 by lodovico          #+#    #+#             */
/*   Updated: 2021/02/16 11:31:56 by lodovico         ###   ########.fr       */
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
	
	mlx_ptr = mlx_init();
	mlx_win = mlx_new_window(mlx_ptr, 1000, 500, "ok. now run");
	while (x < 500)
	{
		mlx_pixel_put(mlx_ptr, mlx_win, x, y, ft_color(0, 125, 125, 255));
		x++;
		if ((x % 2) != 0)
			y++;
	}
	mlx_loop(mlx_ptr);
	return (0);
}