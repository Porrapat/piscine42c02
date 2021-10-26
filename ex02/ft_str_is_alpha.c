/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppetchda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 23:52:59 by porrapat          #+#    #+#             */
/*   Updated: 2021/10/24 23:53:55 by porrapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	is_alpha;
	int	index;

	is_alpha = 1;
	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] < 'A' || str[index] > 'z'
			|| (str[index] > 'Z' && str[index] < 'a'))
		{
			return (0);
		}
		else
		{
			index++;
			continue ;
		}
	}
	return (is_alpha);
}
