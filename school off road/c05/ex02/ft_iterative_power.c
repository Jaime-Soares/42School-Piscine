/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:07:39 by jaiperei          #+#    #+#             */
/*   Updated: 2022/08/29 14:07:49 by jaiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_fibonacci(int index);
{
   if ( index == 0 )
      return 0;
   else if ( index == 1 )
      return 1;
   else
      return (ft_fibonacci(index-1) + ft_fibonacci(index-2));
}

int	main()
{
	int result;
	
	result = ft_fibonacci(7);
	printf("%d", result);
}
