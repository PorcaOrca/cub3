/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prova.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lodovico <lodovico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 10:40:03 by lodovico          #+#    #+#             */
/*   Updated: 2021/02/17 12:24:11 by lodovico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include "cub3.h"

int		main()
{
	t_param	param;
		
	param.xy->x = 50;
	param.xy->y = 50;
	param.mlx_ptr = mlx_init();
	param.mlx_win = mlx_new_window(param.mlx_ptr, 1000, 500, "ok. now run");
	param.img1 = ft_img_init(param.mlx_ptr, param.xy);
	param.img2 = ft_img_init(param.mlx_ptr, param.xy);
	mlx_key_hook(param.mlx_win, key_hook, &param);
	mlx_loop(param.mlx_ptr);
	return (0);
}