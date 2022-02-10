/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rade-sar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 18:11:04 by rade-sar          #+#    #+#             */
/*   Updated: 2021/09/22 14:56:28 by rade-sar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_arg(char *base)
{
	int		i;
	int		i2;

	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		i2 = 0;
		while (base[i2] != '\0')
		{
			if (base[i2] == base[i] && i2 != i)
				return (0);
			i2++;
		}
		i++;
	}
	return (1);
}

int	ft_check_sign(char *str, int pos)
{
	int		sign;
	int		test;

	test = 0;
	sign = 1;
	while (str[pos] != '\0')
	{
		while (str[pos] == '-' || str[pos] == '+')
		{
			if (str[pos] == '-' && sign == 1 )
			{
				test = 1;
				sign = -1;
			}
			else if (str[pos] == '-' && sign == -1)
				sign = 1;
			pos++;
		}
		if (test == 1)
			break ;
		pos++;
	}
	return (sign);
}

char	*ft_isspace(char *str, int pos, char *base)
{
	int		i;

	i = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n'
		|| *str == '\f' || *str == '\r')
	{
		str++;
		pos++;
	}
	while (base[i] != '\0')
	{
		if (str[pos] == base[i])
			break ;
		i++;
	}
	if (str[pos] == base[i])
		return (&str[pos]);
	else
		return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int		ibase;
	int		result;
	int		sign;
	char	*nbr;

	result = 0;
	ibase = 0;
	nbr = ft_isspace(str, 0, base);
	sign = ft_check_sign(str, 0);
	if (!(check_arg(base)))
		return (0);
	while (base[ibase] != '\0')
		ibase++;
	return (result * sign);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d", ft_atoi_base("			\n----380A", "0123456789ABCDEF"));
}*/
