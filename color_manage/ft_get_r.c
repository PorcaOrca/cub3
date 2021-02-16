/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_r.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lodovico <lodovico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 18:24:07 by lodovico          #+#    #+#             */
/*   Updated: 2021/02/16 18:29:59 by lodovico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_get_r(int trgb)
{
	trgb = trgb & 0x00FF0000;
	return (trgb >> 16);
}