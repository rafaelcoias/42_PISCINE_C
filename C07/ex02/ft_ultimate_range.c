/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rade-sar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 14:02:50 by rade-sar          #+#    #+#             */
/*   Updated: 2021/09/24 14:51:39 by rade-sar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		*a;
	int		i;
	long	len;

	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	len = max - min;
	a = malloc(sizeof(int) * len);
	if (a == NULL)
		return (-1);
	i = 0;
	while (i < len)
	{
		a[i] = min;
		min++;
		i++;
	}
	*range = a;
	return (len);
}
/*
int	main(void)
{
	int		min;
	int		max;
	int		i;
	int		j;
	int		*range;

	min = -22;
	max = 822;
	i = 0;
	j = ft_ultimate_range(&range, min, max);
	while (i < (max - min))
	{
		printf("%i, ", range[i]);
		i++;
	}
	return (0);
}*/
