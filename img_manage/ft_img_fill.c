/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_img_fill.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lodovico <lodovico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 09:19:03 by lodovico          #+#    #+#             */
/*   Updated: 2021/02/17 15:28:02 by lodovico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3.h"

void	ft_img_fill(t_img *img, t_xy *limit, double shade, int trgb)
{
	int		x;
	int		y;

	x = 0;
	y = 0;
	while (y < limit->y)
	{
		x = 0;
		trgb = ft_shade(trgb, shade);
		while (x < limit->x)
		{
			ft_img_pixel_put(img, x, y, trgb);
			x++;
		}
		shade += 0.002;
		y++;
	}
}