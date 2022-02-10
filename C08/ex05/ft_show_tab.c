/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rade-sar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 14:48:23 by rade-sar          #+#    #+#             */
/*   Updated: 2021/09/28 16:04:58 by rade-sar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_write_str(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_print_special(void)
{
	write(1, "-2147483648", 11);
}

void	ft_putnbr(int nb)
{
	char	c;

	if (nb != -2147483648)
	{
		if (nb < 0)
		{
			nb = nb * (-1);
			write(1, "-", 1);
		}
		if (nb < 10)
		{
			c = nb + '0';
			write(1, &c, 1);
		}
		else
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
	}
	else
		ft_print_special();
}

void	ft_show_tab(struct s_stock_str *par)
{
	int		i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_write_str(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_write_str(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
