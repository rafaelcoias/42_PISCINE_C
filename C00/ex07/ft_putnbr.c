/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rade-sar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 12:33:55 by rade-sar          #+#    #+#             */
/*   Updated: 2021/09/11 19:21:06 by rade-sar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_expo(int b, int e);

void	ft_putnbr(int nb)
{
	char	numb;
	int		aux;
	int		c;
	int		dig;

	c = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		write (1, "-", 1);
	}
	aux = nb;
	while (aux >= 10)
	{
		aux = aux / 10;
		c++;
	}
	dig = ft_expo(10, c);
	while (dig >= 1)
	{
		numb = '0' + (nb / dig) % 10;
		write(1, &numb, 1);
		dig = dig / 10;
	}
}

int	ft_expo(int b, int e)
{
	int	dig;

	dig = b;
	if (e == 0)
	{
		return (1);
	}
	else
	{
		while (e > 1)
		{
			dig = dig * 10;
			e--;
		}
		return (dig);
	}
}
