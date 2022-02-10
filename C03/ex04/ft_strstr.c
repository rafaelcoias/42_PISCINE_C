/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rade-sar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 12:34:02 by rade-sar          #+#    #+#             */
/*   Updated: 2021/09/17 14:27:57 by rade-sar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_checkchar(int pos, char *str, char *to_find)
{
	int		post;
	int		j;

	post = 0;
	j = 0;
	while (str[pos] == to_find[post] && to_find[post] != '\0')
	{
		j++;
		post++;
		pos++;
	}
	return (j);
}

int	ft_checki(char *to_find)
{
	int		i;
	int		pos;

	i = 0;
	pos = 0;
	while (to_find[pos] != '\0')
	{
		i++;
		pos++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		pos;
	int		i;
	int		j;

	if (to_find[0] == '\0')
	{
		return (str);
	}
	i = 0;
	i = ft_checki(to_find);
	j = 0;
	pos = 0;
	while (str[pos] != '\0')
	{	
		if (str[pos] == to_find[0])
		{
			j = ft_checkchar(pos, str, to_find);
			if (i == j)
				return (&str[pos]);
		}
		pos++;
	}
	return (0);
}
