/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppetchda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 23:52:59 by porrapat          #+#    #+#             */
/*   Updated: 2021/10/24 23:53:55 by porrapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <unistd.h>

#define MAX_PAGE_SIZE 15

void	ft_bf_num(unsigned long number, int radix, int buffer[], int index)
{
	if (number > (unsigned long)(radix - 1))
		ft_bf_num(number / radix, radix, buffer, index + 1);
	buffer[index] = number % radix;
}

void	ft_write_hex(unsigned long number, int radix, int char_count)
{
	int	buffer[MAX_PAGE_SIZE + 1];
	int	index;

	index = -1;
	while (index++ < MAX_PAGE_SIZE)
		buffer[index] = 0;
	ft_bf_num(number, radix, buffer, 0);
	index = -1;
	while (index++ < char_count)
	{
		write(1, &"0123456789abcdef"[buffer[char_count - index]], 1);
	}
}

void	ft_write_safe_char(char *c)
{
	if (*c >= ' ' && *c != 127)
		write(1, c, 1);
	else
		write(1, &".", 1);
}

void	ft_print_memory_at(void *start_addr, unsigned int size, char *curr_addr)
{
	int	index;

	ft_write_hex((unsigned long)curr_addr, 16, MAX_PAGE_SIZE);
	write(1, &": ", 2);
	index = 0;
	while (index++ < 16)
	{
		if (start_addr + size <= (void *)(curr_addr + index - 1))
			write(1, &"  ", 2);
		else
			ft_write_hex((unsigned char)(*(curr_addr + index - 1)), 16, 1);
		if (index % 2 == 0)
			write(1, &" ", 1);
	}
	index = 0;
	while (index++ < 16)
		if (start_addr + size > (void *)(curr_addr + index - 1))
			ft_write_safe_char((char *)curr_addr + index - 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char	*curr_addr;

	curr_addr = (char *)addr;
	while ((void *)curr_addr < (addr + size))
	{
		ft_print_memory_at(addr, size, curr_addr);
		write(1, &"\n", 1);
		curr_addr += 16;
	}
	return (addr);
}
