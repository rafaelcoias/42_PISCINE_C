/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rade-sar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 20:24:55 by rade-sar          #+#    #+#             */
/*   Updated: 2021/09/25 14:09:09 by rade-sar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long	i;

	i = 2;
	if (nb == 2 || nb == 3 || nb == 5 || nb == 7)
		return (1);
	if (nb == 0 || nb == 1)
		return (0);
	while (i < 46341)
	{
		if (nb % i == 0 && nb != i)
			return (0);
		else if (nb % i == 0 && nb == i)
			return (1);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%i, ", ft_is_prime(2147483647));
	printf("%s\n", "Answer must be 1.");
	printf("%i, ", ft_is_prime(49));
	printf("%s\n", "Answer must be 0");
	printf("%i, ", ft_is_prime(1));
	printf("%s\n", "Answer must be 0");
}*/
