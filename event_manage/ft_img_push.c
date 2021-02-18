/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_img_push.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lodovico <lodovico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 09:22:29 by lodovico          #+#    #+#             */
/*   Updated: 2021/02/18 09:25:56 by lodovico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3.h"

void	ft_img_push(t_param *param, int trgb)
{
	t_img	*img;
	double	shade;
	
	shade = 0;
	img = ft_img_init(param->mlx_ptr, param->xy);
	ft_img_fill(img, param->xy, shade, trgb);
	mlx_clear_window (param->mlx_ptr, param->mlx_win);
	ft_img_to_win(img, param->mlx_ptr, param->mlx_win);
	mlx_destroy_image (param->mlx_ptr, img->ptr);
	free(img);
}