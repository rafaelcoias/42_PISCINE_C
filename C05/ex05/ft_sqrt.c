/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rade-sar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 20:00:45 by rade-sar          #+#    #+#             */
/*   Updated: 2021/09/22 14:49:13 by rade-sar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	aux;

	aux = 1;
	if (nb == 0)
		return (0);
	while ((aux * aux) < nb)
	{
		aux++;
	}
	if ((nb % aux) == 0 && (aux * aux) == nb)
		return (aux);
	else
		return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%i, ", ft_sqrt(16));
	printf("%s\n", "Answer must be 4");
	printf("%i, ", ft_sqrt(144));
	printf("%s\n", "Answer must be 12");
	printf("%d, ", ft_sqrt(5));
	printf("%s", "Answer must be 0");
}*/
