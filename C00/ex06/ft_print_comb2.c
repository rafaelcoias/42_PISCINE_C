/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rade-sar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 14:37:12 by rade-sar          #+#    #+#             */
/*   Updated: 2021/09/17 12:41:26 by rade-sar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar2(char numb);

void	ft_print_comb2(void)
{
	int	n[2];

	n[0] = 0;
	while (n[0] <= 99)
	{
		n[1] = n[0] + 1;
		while (n[1] <= 99)
		{
			ft_putchar2('0' + n[0] / 10);
			ft_putchar2('0' + n[0] % 10);
			write(1, " ", 1);
			ft_putchar2('0' + n[1] / 10);
			ft_putchar2('0' + n[1] % 10);
			if (n[0] != 98 || n[1] != 99)
			{
				write(1, ", ", 2);
			}
			n[1]++;
		}
		n[0]++;
	}
}

void	ft_putchar2(char numb)
{
	write(1, &numb, 1);
}
