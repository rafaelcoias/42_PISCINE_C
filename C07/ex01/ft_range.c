/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rade-sar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 10:46:31 by rade-sar          #+#    #+#             */
/*   Updated: 2021/09/24 14:49:38 by rade-sar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int		*a;
	int		i;
	long	len;

	if (min >= max)
		return (NULL);
	len = max - min;
	a = malloc(sizeof(int) * len);
	if (a == NULL)
	{
		a = NULL;
		return (a);
	}
	i = 0;
	while (i < len)
	{
		a[i] = min;
		min++;
		i++;
	}
	return (a);
}
/*
int	main(void)
{
	int		min;
	int		max;
	int		i;
	int		*a;

	min = -22;
	max = 822;
	i = 0;
	a = ft_range(min, max);
	while (i < (max - min))
	{
		printf("%d, ", a[i]);
		i++;
	}
	return (0);
}*/
