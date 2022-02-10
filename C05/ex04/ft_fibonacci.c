/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rade-sar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 19:27:26 by rade-sar          #+#    #+#             */
/*   Updated: 2021/09/23 13:00:46 by rade-sar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int		sum;
	int		a;
	int		b;

	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index > 1)
	{
		a = ft_fibonacci(index - 2);
		b = ft_fibonacci(index - 1);
		sum = a + b;
		return (sum);
	}
	sum = 1;
	return (sum);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%i, ", ft_fibonacci(12));
	printf("%s\n", "Answer must be 144.");
	printf("%i, ", ft_fibonacci(-5));
	printf("%s\n", "Answer must be -1");
	printf("%i, ", ft_fibonacci(20));
	printf("%s\n", "Answer must be 6765");
}
*/
