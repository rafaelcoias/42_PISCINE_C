/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rade-sar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 12:27:21 by rade-sar          #+#    #+#             */
/*   Updated: 2021/09/20 14:39:12 by rade-sar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	n;

	i = 0;
	n = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	if (size > 0)
	{
		while (src[n] != '\0' && n < (size - 1))
		{
			dest[n] = src[n];
			n++;
		}
		dest[n] = '\0';
	}
	return (i);
}
