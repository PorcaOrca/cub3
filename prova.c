/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prova.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lodovico <lodovico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 10:40:03 by lodovico          #+#    #+#             */
/*   Updated: 2021/02/17 16:07:51 by lodovico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include "cub3.h"

int		main()
{
	t_param	param;
	
	param.xy = (t_xy *)malloc(sizeof(t_xy));
	param.xy->x = malloc(sizeof(int));
	param.xy->y = malloc(sizeof(int));
	*param.xy->x = 50;
	*param.xy->y = 50;
	param.mlx_ptr = mlx_init();
	param.mlx_win = mlx_new_window(param.mlx_ptr, 1000, 500, "ok. now run");
	param.img1 = ft_img_init(param.mlx_ptr, param.xy);
	param.img2 = ft_img_init(param.mlx_ptr, param.xy);
	printf("img addr = %p\n", param.img1->addr);
	mlx_key_hook(param.mlx_win, ft_key_hook, &param);
	//mlx_key_hook(param.mlx_win, ft_close, &param);
	mlx_loop(param.mlx_ptr);
	return (0);
}