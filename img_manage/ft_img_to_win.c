/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_img_to_win.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lodovico <lodovico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 11:39:10 by lodovico          #+#    #+#             */
/*   Updated: 2021/02/18 09:33:38 by lodovico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3.h"

void	ft_img_to_win(t_img *img, void *mlx_ptr, void *mlx_win)
{
	int x;
	int y;
	
	x = 0;
	y = 0;
	while (y < 1080)
	{
		x = 0;
		while (x < 1920)
		{
			mlx_put_image_to_window(mlx_ptr, mlx_win, img->ptr, x, y);
			x += 50;
		}
		y += 50;
	}
}