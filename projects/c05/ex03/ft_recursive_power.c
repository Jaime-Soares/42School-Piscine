/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:21:52 by jaiperei          #+#    #+#             */
/*   Updated: 2022/08/29 14:22:09 by jaiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
	int result;
	
	result = nb;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else
	{
		if (power > 1)
		{
			result *= ft_recursive_power(nb, --power);
		}
		return (result);
	}
}

int	main()
{
	int result;
	
	result = ft_recursive_power(4, 2);
	printf("%d", result);
}
