/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rade-sar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 10:07:04 by rade-sar          #+#    #+#             */
/*   Updated: 2021/09/13 13:34:22 by rade-sar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int		aux;
	int		cont;

	cont = 0;
	while (cont < (size - 1))
	{
		if (tab[cont] > tab[cont + 1])
		{
			aux = tab[cont];
			tab[cont] = tab[cont + 1];
			tab[cont + 1] = aux;
			cont = 0;
		}
		else
			cont++;
	}
}
