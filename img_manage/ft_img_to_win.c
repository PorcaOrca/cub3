/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_img_to_win.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lodovico <lodovico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 11:39:10 by lodovico          #+#    #+#             */
/*   Updated: 2021/02/17 11:46:33 by lodovico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3.h"

void	ft_img_to_win(t_img *img, void *mlx_ptr, void *mlx_win)
{
	t_xy	img_pos;
	
	img_pos.x = 0;
	img_pos.y = 0;
	while (img_pos.y < 500)
	{
		img_pos.x = 0;
		while (img_pos.x < 1000)
		{
			mlx_put_image_to_window(mlx_ptr, mlx_win, img->ptr, img_pos.x, img_pos.y);
			img_pos.x += 50;
		}
		img_pos.y += 50;
	}
}