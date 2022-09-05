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
int	main()
{
	int	div_res;
	int	mod_res;
	int	*div;
	int	*mod;
	
	div = &div_res;
	mod = &mod_res;
	ft_div_mod(10, 5, div, mod);
	printf("Div: %d\n", div_res);
	printf("Mod: %d\n", mod_res);
}
*/
