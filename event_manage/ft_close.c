/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_close.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lodovico <lodovico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 15:49:03 by lodovico          #+#    #+#             */
/*   Updated: 2021/02/21 09:16:47 by lodovico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3.h"

int		ft_close(int keycode, t_param *param)
{
	printf("you push %d", keycode);
	write(1, "exit\n", 5);
	if (keycode == 65307)
	{
		mlx_clear_window (param->mlx_ptr, param->mlx_win);
		mlx_destroy_window (param->mlx_ptr, param->mlx_win);
		exit (0);
	}
	return (0);
}