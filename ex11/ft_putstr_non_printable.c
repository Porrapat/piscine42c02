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

void	ft_non_pritable_to_hexa(unsigned char c)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	if (c / 16 > 0)
	{
		ft_putchar(hexa[c / 16]);
		ft_putchar(hexa[c % 16]);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(hexa[c]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= ' ' && str[index] <= '~')
		{
			ft_putchar(str[index]);
		}
		else
		{
			ft_putchar('\\');
			ft_non_pritable_to_hexa(str[index]);
		}
		index++;
	}
}
