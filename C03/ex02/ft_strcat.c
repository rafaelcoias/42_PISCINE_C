/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rade-sar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 18:33:17 by rade-sar          #+#    #+#             */
/*   Updated: 2021/09/16 12:28:26 by rade-sar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int		posd;
	int		poss;

	posd = 0;
	poss = 0;
	while (dest[posd] != '\0')
	{
		posd++;
	}
	while (src[poss] != '\0')
	{
		dest[posd] = src[poss];
		poss++;
		posd++;
	}
	dest[posd] = '\0';
	return (dest);
}
