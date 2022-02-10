/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rade-sar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 11:31:29 by rade-sar          #+#    #+#             */
/*   Updated: 2021/09/28 15:04:03 by rade-sar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_length(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_str_copy(char *str, int size)
{
	int		i;
	char	*copy;

	i = 0;
	copy = malloc(sizeof(char) * (size + 1));
	if (copy == NULL)
	{
		copy = NULL;
		return (copy);
	}
	while (str[i] != '\0')
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*ptr;
	int			i;

	i = 0;
	ptr = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (ptr == NULL)
		return (NULL);
	while (i < ac)
	{
		ptr[i].str = av[i];
		ptr[i].size = ft_length(av[i]);
		ptr[i].copy = ft_str_copy(av[i], ptr[i].size);
		i++;
	}
	ptr[i].str = 0;
	ptr[i].size = 0;
	ptr[i].copy = 0;
	return (ptr);
}
/*
int	main(void)
{
	int		ac;
	char	**av;

	ac = 3;
	av[0] = "rafael";
	av[1] = "pereira";
	av[2] = "coias";
	ft_strs_to_tab(ac, av);
	return (0);
}*/
