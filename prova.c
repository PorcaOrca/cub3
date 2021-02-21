/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prova.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lodovico <lodovico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 10:40:03 by lodovico          #+#    #+#             */
/*   Updated: 2021/02/21 09:20:20 by lodovico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include "cub3.h"

int		main()
{
	t_param	param;
	
	t_img	*img;
	
	param.xy = (t_xy *)malloc(sizeof(t_xy));
	param.xy->x = 780;
	param.xy->y = 460;
	param.mlx_ptr = mlx_init();
	param.mlx_win = mlx_new_window(param.mlx_ptr, param.xy->x, param.xy->y, "ok. now run");
	param.shade = 0;
	param.da_loop = 0;
	
	//mlx_loop_hook(param.mlx_ptr, ft_next_frame, &param);
	mlx_key_hook(param.mlx_ptr, ft_key_hook, &param);
	mlx_loop(param.mlx_ptr);
	return (0);
}