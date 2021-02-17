/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shade.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lodovico <lodovico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 18:30:14 by lodovico          #+#    #+#             */
/*   Updated: 2021/02/17 09:34:00 by lodovico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3.h"

int		ft_shade(int trgb, double shade)
{
	int		r;
	int		g;
	int		b;
	if (shade < 0 || shade > 1)
		return (-2147483648);
	r = ft_get_r(trgb);
	r -= r * shade;
	g = ft_get_g(trgb);
	g -= g * shade;
	b = ft_get_b(trgb);
	b -= b * shade;
	return (ft_color(0, r, g, b));
}