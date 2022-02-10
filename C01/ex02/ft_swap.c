/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rade-sar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 16:17:49 by rade-sar          #+#    #+#             */
/*   Updated: 2021/09/12 17:11:32 by rade-sar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int		c;
	int		d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
