/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 11:27:15 by jaiperei          #+#    #+#             */
/*   Updated: 2022/08/26 11:27:19 by jaiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int	d_res;
	int	m_res;
	int	*div;
	int	*mod;
	
	div = &d_res;
	mod = &m_res;
	ft_div_mod(10, 5, div, mod);
	printf("Resultado:\n");
	printf("Div int: %d\n", d_res);
	printf("Mod int: %d\n", m_res);
}
*/
