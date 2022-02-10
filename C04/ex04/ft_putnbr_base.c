/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rade-sar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 14:18:16 by rade-sar          #+#    #+#             */
/*   Updated: 2021/09/26 14:30:20 by rade-sar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		j = i + 1;
		if (base[i] == '-' || base[i] == '+')
			return (0);
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0 )
	{
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	div;
	long	result;
	long	nb;
	int		ibase;

	nb = nbr;
	if (ft_check_base(base))
		ibase = ft_strlen(base);
	else
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	div = 1;
	while ((nb / div) >= ibase)
		div = div * ibase;
	while (div > 0)
	{
		result = (nb / div) % ibase;
		ft_putchar(base[result]);
		div = div / ibase;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	ft_putnbr_base(157, "0123456789");
	write(1, " , answer must be 157", 21);
	write (1, "\n", 1);
	ft_putnbr_base(108, "0123456789ABCDEF");
	write(1, " , answer must be 6C", 20);
	write (1, "\n", 1);
	ft_putnbr_base(1570, "01");
	write(1, " , answer must be 11000100010", 29);
	write (1, "\n", 1);
	ft_putnbr_base(15, "01234567");
	write(1, " , answer must be 17", 20);
	write (1, "\n", 1);
	ft_putnbr_base(10, "0123456789ABCDEF");
	write(1, " , answer must be A", 19);
	write (1, "\n", 1);
	ft_putnbr_base(-2147483648, "0123456789ABCDEF");
	write(1, " , answer must be -80000000", 27);
	write (1, "\n", 1);
	ft_putnbr_base(2147483647, "0123456789ABCDEF");
	write(1, " , answer must be 7FFFFFFF", 26);
}*/
