/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rade-sar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 13:59:01 by rade-sar          #+#    #+#             */
/*   Updated: 2021/09/30 16:17:27 by rade-sar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_str_size(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_check_charset(char c, char *sep)
{
	int		i;

	i = 0;
	while (sep[i] != '\0')
	{
		if (c == sep[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strcat(char	*str, int i, int j)
{
	char	*aux;
	int		size;
	int		k;

	size = 0;
	k = j;
	while (k < i)
	{
		size++;
		k++;
	}
	aux = malloc(sizeof(char) * (size + 1));
	if (aux == NULL)
		return (0);
	k = 0;
	while (j < i)
	{
		aux[k] = str[j];
		k++;
		j++;
	}
	aux[k] = '\0';
	return (aux);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		i;
	int		j;
	int		index;

	result = malloc(sizeof(*result) * (ft_str_size(str) + 1));
	if (result == NULL)
		return (0);
	i = 0;
	index = 0;
	while (str[i] != '\0')
	{
		while (ft_check_charset(str[i], charset))
			i++;
		j = i;
		while (!(ft_check_charset(str[i], charset) && str[i] != '\0'))
			i++;
		if (!(ft_check_charset(str[i - 1], charset)))
			result[index] = ft_strcat(str, i, j);
		index++;
		i++;
	}
	result[index] = 0;
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*str;
	char	*sep;
	char	**result;
	int		i;
	int		j;

	str = "o42rafael42e42lindo";
	sep = "0123456789";
	result = ft_split(str, sep);
	i = 0;
	j = 0;
	while (result[i] != 0)
	{
		printf("%s", result[i]);
		i++;
	}
}*/
