/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuimroj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 10:42:53 by tsuimroj          #+#    #+#             */
/*   Updated: 2021/10/25 11:46:05 by tsuimroj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	is_uppercase;
	int	index;

	is_uppercase = 1;
	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] < 'A' || str[index] > 'Z')
		{
			return (0);
		}
		else
		{
			index++;
			continue ;
		}
	}
	return (is_uppercase);
}
