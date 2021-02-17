/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key_hook.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lodovico <lodovico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 11:51:49 by lodovico          #+#    #+#             */
/*   Updated: 2021/02/17 15:44:53 by lodovico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3.h"

int		ft_key_hook(int keycode, t_param *param)
{
	int		trgb;
	double	shade;
	void	*cache;
	int		control;
	
	control = 0;
	shade = 0;
	if (keycode == 114)
	{
		if (control == 0)
		{

			cache = param->img1->ptr;
			control = 1;
		}
		else if (control == 1)
		{
			cache = param->img2->ptr;
			control = 0;
		}
		trgb = ft_color(0, 255, 0, 0);
		ft_img_fill(cache, param->xy, shade, trgb);
		ft_img_to_win(cache,param->mlx_ptr, param->mlx_win);
	}
	else
	{
		if (control == 0)
		{
			cache = param->img1->ptr;
			control = 1;
		}
		else if (control == 1)
		{
			cache = param->img2->ptr;
			control = 0;
		}
		trgb = ft_color(0, 0, 0, 0);
		ft_img_fill(cache, param->xy, shade, trgb);
		ft_img_to_win(cache,param->mlx_ptr, param->mlx_win);
	}
	return (keycode);
}