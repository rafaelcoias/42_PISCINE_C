/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rade-sar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 15:32:48 by rade-sar          #+#    #+#             */
/*   Updated: 2021/09/22 16:36:43 by rade-sar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_arg(int argc, char **argv)
{
	int		i;
	int		j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while ((argv[i])[j] != '\0')
		{
			write(1, &(argv[i])[j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*a;

	if (argc == 1)
		return (0);
	i = 1;
	while (i < (argc - 1))
	{
		j = 0;
		while ((argv[i])[j] == (argv[i + 1])[j]
				&& (argv[i])[j] != '\0' && (argv[i + 1])[j] != '\0')
			j++;
		if ((argv[i])[j] > (argv[i + 1])[j])
		{
			a = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = a;
			i = 1;
		}
		else
			i++;
	}
	ft_write_arg(argc, argv);
	return (0);
}
