/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lodovico <lodovico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 18:21:49 by lodovico          #+#    #+#             */
/*   Updated: 2021/02/16 18:23:39 by lodovico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_color(int t, int r, int g, int b)
{
	if (t < 0 || t > 255 || r < 0 || r > 255 ||
		b < 0 || b > 255 || g < 0 || g > 255)
		return (-2147483648);
	return (t << 24 | r << 16 | g << 8 | b);
}