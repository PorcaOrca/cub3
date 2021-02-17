/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_hook.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lodovico <lodovico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 11:51:49 by lodovico          #+#    #+#             */
/*   Updated: 2021/02/17 12:31:11 by lodovico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3.h"

int		key_hook(int keycode, void *temp)
{
	int		trgb;
	double	shade;
	void	*cache;
	int		control;
	t_param	*param;
	
	param = (t_param *) temp;
	control = 0;
	shade = 0;
	if (keycode == 114)
	{
		if (control == 0)
		{
			cache = param->img1->ptr;
			control = 1;
		}
		else
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
		else
		{
			cache = param->img2->ptr;
			control = 0;
		}
		trgb = ft_color(0, 0, 0, 0);
		ft_img_fill(cache, param->xy, shade, trgb);
		ft_img_to_win(cache,param->mlx_ptr, param->mlx_win);
	}
	return (1);
}