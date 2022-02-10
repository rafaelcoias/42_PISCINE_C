/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rade-sar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 14:36:51 by rade-sar          #+#    #+#             */
/*   Updated: 2021/09/28 19:18:10 by rade-sar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_size_str(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_check_size(int size, char **strs, char *sep )
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (size < 1)
	{
		str = malloc(sizeof(char));
		*str = 0;
		return (str);
	}
	while (i < size)
	{
		j = j + ft_size_str(strs[i]);
		i++;
	}
	j = j + (ft_size_str(sep) * (size - 1));
	str = malloc(sizeof(char) * j);
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*aux;
	int		i;
	int		j;
	int		pos;

	i = -1;
	pos = 0;
	aux = ft_check_size(size, strs, sep);
	while (++i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			aux[pos++] = strs[i][j];
			j++;
		}
		j = 0;
		while (sep[j] != '\0' && i != (size - 1))
		{
			aux[pos++] = sep[j];
			j++;
		}
	}
	aux[pos] = '\0';
	return (aux);
}
/*
int	main(void)
{
	char *text[10];
	printf("main corre\n");
	text[0] = "Testando";
	text[1] = "a";
	text[2] = "funcao";
	text[3] = "ft_strjoin";
	text[4] = "com";
	text[5] = "o";
	text[6] = "separador";
	text[7] = "\' - \'";
	text[8] = "e tamanho";
	text[9] = "10";
	printf("%s\n", ft_strjoin(0, text, " - "));
}*/
