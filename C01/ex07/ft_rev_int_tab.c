/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rade-sar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 08:56:26 by rade-sar          #+#    #+#             */
/*   Updated: 2021/09/13 14:29:43 by rade-sar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		aux;
	int		cont;

	cont = 0;
	while (cont < (size / 2))
	{
		aux = tab[cont];
		tab[cont] = tab[size - cont - 1];
		tab[size - cont - 1] = aux;
		cont++;
	}
}
