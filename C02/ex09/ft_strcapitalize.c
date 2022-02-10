/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rade-sar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 10:41:50 by rade-sar          #+#    #+#             */
/*   Updated: 2021/09/17 12:15:07 by rade-sar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_check(char c)
{
	if (c < 123 && c > 96)
	{
		c = c - 32;
	}
	return (c);
}

char	ft_checkletter(char a, char x)
{
	if ((a > 64 && a < 91) || (a > 96 && a < 123) || (a > 47 && a < 58))
	{
		if (x < 91 && x > 64)
		{
			x = x + 32;
		}
	}
	return (x);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	x;

	i = 0;
	while (str[i] != '\0')
	{
		x = str[i + 1];
		str[0] = ft_check(str[0]);
		if (!((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123)))
		{
			if (!(str[i] > 47 && str[i] < 58) && (x > 96 && x < 123))
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
		str[i + 1] = ft_checkletter(str[i], str[i + 1]);
		i++;
	}
	return (str);
}
