/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key_hook.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lodovico <lodovico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 11:51:49 by lodovico          #+#    #+#             */
/*   Updated: 2021/02/18 09:52:45 by lodovico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3.h"

int		ft_key_hook(int keycode, t_param *param)
{
	int		trgb;
	
	printf("you push = %d\n", keycode);
	if (keycode == 65307)
	{
		mlx_clear_window (param->mlx_ptr, param->mlx_win);
		mlx_destroy_window (param->mlx_ptr, param->mlx_win);
		exit(0);
	}
	else if (keycode == 114)
	{
		trgb = ft_color(0, 255, 0, 0);
		ft_img_push(param, trgb);
	}
	else if (keycode == 103)
	{
		trgb = ft_color(0, 0, 255, 0);
		ft_img_push(param, trgb);
	}
	else if (keycode == 98)
	{
		trgb = ft_color(0, 0, 0, 255);
		ft_img_push(param, trgb);
	}
	else if (keycode == 112)
	{
		trgb = ft_color(0, 255, 0, 255);
		ft_img_push(param, trgb);
	}
	else if (keycode == 99)
	{
		trgb = ft_color(0, 0, 255, 255);
		ft_img_push(param, trgb);
	}
	else if (keycode == 121)
	{
		trgb = ft_color(0, 255, 255, 0);
		ft_img_push(param, trgb);
	}
	else
	{
		mlx_clear_window (param->mlx_ptr, param->mlx_win);
	}
	return (keycode);
}