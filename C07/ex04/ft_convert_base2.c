/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rade-sar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 20:08:01 by rade-sar          #+#    #+#             */
/*   Updated: 2021/09/29 15:30:12 by rade-sar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	ft_get_size(long result, int ibase)
{
	long	i;

	i = 0;
	while (result >= ibase)
	{
		++i;
		result = result / ibase;
	}
	return (++i);
}

int	ft_check_inbase(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != c)
	{
		if (base[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_get_int_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
		{
			return (i);
		}
		i++;
	}
	return (0);
}

char	*ft_final_str(char *str, long result, int sign, char *base_to)
{
	long	aux;
	long	i;
	int		j;
	int		ibase;

	i = 1;
	j = 0;
	ibase = 0;
	if (str == NULL)
		return (NULL);
	while (base_to[ibase] != '\0')
		ibase++;
	if (sign == -1)
		str[j++] = '-';
	while ((result / i) >= ibase)
		i = i * ibase;
	while (i > 0)
	{
		aux = (result / i) % ibase;
		str[j++] = base_to[aux];
		i = i / ibase;
	}
	str[j] = '\0';
	return (str);
}

char	*ft_convert_base2(char *nbr, char *base_to, int sign, char *base_from)
{
	int		i;
	int		ibase;
	int		ibase2;
	long	result;
	char	*final_str;

	ibase = 0;
	ibase2 = 0;
	while (base_to[ibase2] != '\0')
		ibase2++;
	while (base_from[ibase] != '\0')
		ibase++;
	i = 0;
	result = 0;
	while (nbr[i] != '\0' && ft_check_inbase(nbr[i], base_from))
	{
		result = result * ibase + ft_get_int_base(nbr[i], base_from);
		i++;
	}
	final_str = malloc(sizeof(char) * ft_get_size(result, ibase));
	final_str = ft_final_str(final_str, result, sign, base_to);
	return (final_str);
}
