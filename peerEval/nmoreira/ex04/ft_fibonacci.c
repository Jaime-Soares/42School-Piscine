/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoreira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 10:41:24 by nmoreira          #+#    #+#             */
/*   Updated: 2022/09/06 15:20:14 by nmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_fibonacci(int index)
{
	int	result;

	if (index == 0 || index == 1)
		return (index);
	if (index > 1)
	{
		result = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (result);
	}
	return (-1);
}
