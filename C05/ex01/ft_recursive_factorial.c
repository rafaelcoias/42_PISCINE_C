/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rade-sar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:01:05 by rade-sar          #+#    #+#             */
/*   Updated: 2021/09/22 14:42:50 by rade-sar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 1)
	{
		nb = nb * ft_recursive_factorial(nb - 1);
	}
	return (nb);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%i, ", ft_recursive_factorial(0));
	printf("%s\n", "Answer must be 1");
	printf("%i, ", ft_recursive_factorial(4));
	printf("%s\n", "Answer must be 24");
	printf("%i, ", ft_recursive_factorial(6));
	printf("%s\n", "Answer must be 720");
	printf("%i, ", ft_recursive_factorial(-5));
	printf("%s", "Answer must be 0");
}*/
