/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rade-sar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 14:48:04 by rade-sar          #+#    #+#             */
/*   Updated: 2021/09/19 19:37:27 by rade-sar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	idest;
	unsigned int	isrc;
	unsigned int	i;

	idest = 0;
	while (dest[idest] != '\0')
		idest++;
	i = idest;
	isrc = 0;
	while (src[isrc] != '\0')
		isrc++;
	if (size <= idest)
		return (isrc + size);
	if (size > idest && size > 0)
	{
		while (*src != '\0' && (size - idest - 1) > 0)
		{
			dest[idest] = *src;
			idest++;
			src++;
		}
		dest[idest] = '\0';
	}
	return (isrc + i);
}
