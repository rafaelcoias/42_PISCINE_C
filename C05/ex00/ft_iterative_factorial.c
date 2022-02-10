/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rade-sar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:42:09 by rade-sar          #+#    #+#             */
/*   Updated: 2021/09/22 14:39:41 by rade-sar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int		aux;

	aux = nb;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (aux > 1)
	{
		nb = nb * (aux - 1);
		aux--;
	}
	return (nb);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%i, ", ft_iterative_factorial(0));
	printf("%s\n", "Answer must be 1");
	printf("%i, ", ft_iterative_factorial(4));
	printf("%s\n", "Answer must be 24.");
	printf("%i, ", ft_iterative_factorial(6));
	printf("%s\n", "Answer must be 720");
	printf("%i, ", ft_iterative_factorial(-5));
	printf("%s", "Answer must be 0");
}*/
