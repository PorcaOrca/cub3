/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_img_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lodovico <lodovico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 08:29:25 by lodovico          #+#    #+#             */
/*   Updated: 2021/02/17 16:05:54 by lodovico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3.h"

t_img	*ft_img_init(void *mlx_ptr, t_xy *xy)
{
	t_img	*img;
	
	img = (t_img *) malloc(sizeof(t_img));
	img->ptr = mlx_new_image(mlx_ptr, *xy->x, *xy->y);
	img->addr = mlx_get_data_addr(img->ptr, &img->bxp, &img->sizel, &img->endian);
	return (img);
}