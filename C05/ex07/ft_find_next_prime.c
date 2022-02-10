/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rade-sar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 20:47:19 by rade-sar          #+#    #+#             */
/*   Updated: 2021/09/25 13:34:20 by rade-sar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_prime(int nb)
{
	int		i;

	i = 2;
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

int	ft_find_next_prime(int nb)
{
	int		i;
	int		j;

	i = 2;
	if (nb == 3 || nb == 5 || nb == 7)
		return (nb);
	if (nb <= 2)
		return (2);
	if (ft_check_prime(nb))
		return (nb);
	j = 0;
	while (ft_check_prime(nb + j) == 0)
		j++;
	return (nb + j);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%i, ", ft_find_next_prime(-5));
	printf("%s\n", "Answer must be 19");
	printf("%i, ", ft_find_next_prime(2147483645));
	printf("%s\n", "Answer must be 53");
	printf("%i, ", ft_find_next_prime(0));
	printf("%s\n", "Answer must be 2");
}*/
