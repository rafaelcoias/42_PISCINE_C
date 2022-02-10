/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rade-sar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 12:01:02 by rade-sar          #+#    #+#             */
/*   Updated: 2021/09/25 13:51:25 by rade-sar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_sign(char *str, int pos, int sign)
{
	while (str[pos] == '+' || str[pos] == '-')
	{
		if (str[pos] == '-' && sign == 1 )
		{
			sign = -1;
		}
		else if (str[pos] == '-' && sign == -1)
		{
			sign = 1;
		}
		pos++;
	}
	return (sign);
}

int	ft_atoi(char *str)
{
	int		i;
	int		sign;
	int		result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	sign = ft_check_sign(str, i, sign);
	while (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%i", ft_atoi("   ---+--+1234ab567"));
}*/
