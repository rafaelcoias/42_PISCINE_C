/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rade-sar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:15:23 by rade-sar          #+#    #+#             */
/*   Updated: 2021/09/22 14:43:52 by rade-sar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int		aux;

	aux = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		nb = aux * nb;
		power--;
	}
	return (nb);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%i, ", ft_iterative_power(4, 3));
	printf("%s\n", "Answer must be 64.");
	printf("%i, ", ft_iterative_power(-3, 2));
	printf("%s\n", "Answer must be 9");
	printf("%i, ", ft_iterative_power(155, 0));
	printf("%s\n", "Answer must be 1");
	printf("%i, ", ft_iterative_power(2, -5));
	printf("%s", "Answer must be 0");
}*/
