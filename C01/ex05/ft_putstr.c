/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rade-sar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 17:57:08 by rade-sar          #+#    #+#             */
/*   Updated: 2021/09/13 13:30:59 by rade-sar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char letra)
{
	write(1, &letra, 1);
}

void	ft_putstr(char *str)
{
	int		 cont;

	cont = 0;
	while (str[cont] != '\0' )
	{
		ft_putchar(str[cont]);
		cont++;
	}
}
