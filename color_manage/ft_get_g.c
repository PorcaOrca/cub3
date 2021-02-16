/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_g.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lodovico <lodovico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 18:27:39 by lodovico          #+#    #+#             */
/*   Updated: 2021/02/16 18:29:52 by lodovico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_get_g(int trgb)
{
	trgb = trgb & 0x0000FF00;
	return (trgb >> 8);
}