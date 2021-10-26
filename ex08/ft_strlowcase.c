/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuimroj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 11:33:48 by tsuimroj          #+#    #+#             */
/*   Updated: 2021/10/25 11:34:39 by tsuimroj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'A' && str[index] <= 'Z')
		{
			str[index] += 32;
		}
		index++;
	}
	return (str);
}
