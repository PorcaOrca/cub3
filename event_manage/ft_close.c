/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_close.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lodovico <lodovico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 15:49:03 by lodovico          #+#    #+#             */
/*   Updated: 2021/02/17 15:56:16 by lodovico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3.h"

int		ft_close(int keycode, t_param *param)
{
	if (keycode == 65307)
	{
		mlx_clear_window (param->mlx_ptr, param->mlx_win);
		mlx_destroy_window (param->mlx_ptr, param->mlx_win);
	}
	return (0);
}