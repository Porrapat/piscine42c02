/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppetchda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 23:52:59 by porrapat          #+#    #+#             */
/*   Updated: 2021/10/20 23:53:55 by porrapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

void	ft_putstr_non_printable(char *str);

int		main(void)
{
	char	*string;

	string = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(string);
}
