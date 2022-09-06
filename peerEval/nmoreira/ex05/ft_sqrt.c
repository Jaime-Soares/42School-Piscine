/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoreira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 11:03:51 by nmoreira          #+#    #+#             */
/*   Updated: 2022/09/06 11:18:03 by nmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 0;
	while (sqrt * sqrt < nb && sqrt <= 46340)
		sqrt++;
	if (sqrt * sqrt == nb)
		return (sqrt);
	return (0);
}
