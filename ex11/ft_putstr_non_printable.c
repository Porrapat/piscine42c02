/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppetchda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 23:52:59 by porrapat          #+#    #+#             */
/*   Updated: 2021/10/24 23:53:55 by porrapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	index;
	int	non_printable;
	int	mod;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= ' ' && str[index] <= '~')
			ft_putchar(str[index]);
		else
		{
			non_printable = str[index];
			mod = str[index] % 16;
			write(1, "\\", 1);
			ft_putchar(non_printable / 16 + '0');
			if (mod > 9)
				mod = mod - 10 + 'a';
			else
				mod = mod + '0';
			ft_putchar(mod);
		}
		index++;
	}
}
