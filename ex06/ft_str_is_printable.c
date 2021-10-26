/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuimroj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 11:09:44 by tsuimroj          #+#    #+#             */
/*   Updated: 2021/10/25 11:10:05 by tsuimroj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	is_printable;
	int	index;

	is_printable = 1;
	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] < 32 || str[index] > 126)
		{
			return (0);
		}
		else
		{
			index++;
			continue ;
		}
	}
	return (is_printable);
}
