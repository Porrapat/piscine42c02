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
	char mystring[256];
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	printf("\n");
	fflush(stdout);
	ft_putstr_non_printable("\t\n\n\n");
	printf("\n");
	fflush(stdout);

	int i = 0;
	for(int c = 1; c < 256; c++)
	{
		mystring[i++] = c;
	}
	mystring[i] = '\0';
	ft_putstr_non_printable(mystring);
	printf("\n");
	fflush(stdout);
}
