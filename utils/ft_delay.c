/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delay.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lodovico <lodovico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 11:09:26 by lodovico          #+#    #+#             */
/*   Updated: 2021/02/21 08:39:10 by lodovico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3.h"

int	ft_delay(int keycode, t_param param)
{
	int		csec;
	clock_t	start;
	
	csec = 2 * CLOCKS_PER_SEC;
	start = clock();
	while (clock() < (csec + start))
	{
	}
	write(1, "bentornato mio maestro\n", 23);
	return (keycode);
}