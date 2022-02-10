/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rade-sar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 10:41:07 by rade-sar          #+#    #+#             */
/*   Updated: 2021/09/22 16:54:29 by rade-sar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	g_min_possible = -2147483648;

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	ft_print_special(void)
{
	write(1, "-2147483648", 11);
}

void	ft_putnbr(int nb)
{
	if (nb != g_min_possible)
	{
		if (nb < 0)
		{
			nb = nb * (-1);
			ft_print('-');
		}
		if (nb < 10)
			ft_print(nb + '0');
		else
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
	}
	else
		ft_print_special();
}
