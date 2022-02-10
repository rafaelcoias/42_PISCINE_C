/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rade-sar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 21:33:23 by rade-sar          #+#    #+#             */
/*   Updated: 2021/09/18 19:35:08 by rade-sar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	posd;
	unsigned int	poss;

	posd = 0;
	poss = 0;
	while (dest[posd] != '\0')
	{
		posd++;
	}
	while (src[poss] != '\0' && poss < nb)
	{
		dest[posd] = src[poss];
		poss++;
		posd++;
	}
	dest[posd] = '\0';
	return (dest);
}
