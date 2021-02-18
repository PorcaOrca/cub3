/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prova.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lodovico <lodovico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 10:40:03 by lodovico          #+#    #+#             */
/*   Updated: 2021/02/18 09:32:21 by lodovico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include "cub3.h"

int		main()
{
	t_param	param;
	
	double	shade;
	t_img	*img;
	int		trgb;
	
	param.xy = (t_xy *)malloc(sizeof(t_xy));
	param.xy->x = 50;
	param.xy->y = 50;
	param.mlx_ptr = mlx_init();
	param.mlx_win = mlx_new_window(param.mlx_ptr, 1920, 1080, "ok. now run");

	shade = 0.5;
	trgb = ft_color(0, 255, 0, 0);
	printf("trgb = %d\n", trgb);
	//img = ft_img_init(param.mlx_ptr, param.xy);
	mlx_key_hook(param.mlx_win, ft_key_hook, &param);
	mlx_loop(param.mlx_ptr);
	return (0);
}