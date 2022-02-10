/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rade-sar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 14:59:09 by rade-sar          #+#    #+#             */
/*   Updated: 2021/09/17 12:16:03 by rade-sar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_ascii_char(int n);
void	print_ascii_dig(int i);
void	ft_putchar(char c);

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	n;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			if (str[i] < 0)
			{
				print_ascii_char(str[i] + 256);
			}
			else
			{
				n = str[i];
				print_ascii_char(n);
			}
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}

void	print_ascii_char(int n)
{
	ft_putchar('\\');
	print_ascii_dig(n / 16);
	print_ascii_dig(n % 16);
}

void	print_ascii_dig(int i)
{
	if (i < 10)
		ft_putchar('0' + i);
	else
		ft_putchar('a' + i - 10);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
