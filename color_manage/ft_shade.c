/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shade.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lodovico <lodovico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 18:30:14 by lodovico          #+#    #+#             */
/*   Updated: 2021/02/16 18:34:32 by lodovico         ###   ########.fr       */
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
	r = shade * ft_get_r(trgb);
	g = shade * ft_get_g(trgb);
	b = shade * ft_get_b(trgb);
	return (ft_color(0, r, g, b));
}