/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_img_fill.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lodovico <lodovico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 09:19:03 by lodovico          #+#    #+#             */
/*   Updated: 2021/02/17 16:09:10 by lodovico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3.h"

void	ft_img_fill(t_img *img, t_xy *limit, double shade, int trgb)
{
	int		x;
	int		y;
	char	*dst;

	x = 0;
	y = 0;
	while (y < *limit->y)
	{
		x = 0;
		trgb = ft_shade(trgb, shade);
		while (x < *limit->x)
		{
			write(1, "lol", 3);
			dst = img->addr + ((y * img->sizel) + (x * (img->bxp / 8)));
			*(unsigned int *)dst = trgb;
			write(1, "una gioia", 9);		
			x++;
		}
		shade += 0.002;
		y++;
	}
}