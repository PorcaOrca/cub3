/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_next_frame.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lodovico <lodovico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 08:09:53 by lodovico          #+#    #+#             */
/*   Updated: 2021/02/21 09:13:14 by lodovico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3.h"

int		ft_next_frame(t_param *param)
{
	int		trgb;
	
	if (param->da_loop == 0)
	{
		trgb = ft_color(0, 255, 0 , 255);
		param->da_loop = 1;
	}
	else if (param->da_loop == 1)
	{
		trgb = ft_color(0, 255, 0, 0);
		param->da_loop = 2;
	}
	else if (param->da_loop == 2)
	{
		trgb = ft_color(0, 255, 255, 0);	
		param->da_loop = 3;
	}
	else if (param->da_loop == 3)
	{
		trgb = ft_color(0, 0, 255, 0);
		param->da_loop = 4;
	}
	else if (param->da_loop == 4)
	{
		trgb = ft_color(0, 0, 255, 0);
		param->da_loop = 5;
	}
	else if (param->da_loop == 5)
	{
		trgb = ft_color(0, 0, 255, 255);
		param->da_loop = 6;
	}
	else if (param->da_loop == 6)
	{
		trgb = ft_color(0, 0, 0, 255);
		param->da_loop = 0;
	}
	ft_img_push(param, trgb);
	return (param->da_loop);
}