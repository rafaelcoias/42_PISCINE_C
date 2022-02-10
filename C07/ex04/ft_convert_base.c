/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rade-sar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 14:38:20 by rade-sar          #+#    #+#             */
/*   Updated: 2021/09/29 17:42:38 by rade-sar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_convert_base2(char *nbr, char *base_to, int sign, char *base_from);
char	*ft_final_str(char *str, int result, int sign, char *base_to);
int		ft_get_size(long result, int ibase);
int		ft_check_inbase(char c, char *base);
int		ft_get_int_base(char c, char *base);

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
		if ((base[i] >= 9 && base[i] <= 13) || base[i] == 32)
			return (0);
		if ((base[i] == '+') || (base [i] == '-'))
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

int	ft_inbase(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != c)
	{
		if (base[i] == '\0')
			return (0);
		i++;
	}
	return (1);
}

int	ft_isspace(char *str)
{
	int		i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	return (i);
}

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

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		i;
	int		j;
	int		sign;
	char	*aux;

	aux = nbr;
	j = 0;
	if (!(ft_check_base(base_from) && ft_check_base(base_to)))
		return (NULL);
	i = ft_isspace(nbr);
	sign = ft_check_sign(nbr, i, 1);
	while (nbr[i] == '+' || nbr[i] == '-')
		i++;
	while (nbr[i] != '\0' && ft_inbase(nbr[i], base_from))
	{
		aux[j] = nbr[i];
		j++;
		i++;
	}
	aux[j] = '\0';
	aux = ft_convert_base2(aux, base_to, sign, base_from);
	return (aux);
}

int	main(int argc, char **argv)
{
	char	*nbr;

	if (argc == 4)
	{
		nbr = ft_convert_base(argv[1], argv[2], argv[3]);
		printf("%s", nbr);
	}
	else
		printf("%s", "Error : please write 3 arguments.");
	return (0);
}
