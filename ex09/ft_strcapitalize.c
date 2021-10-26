/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuimroj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 16:01:17 by tsuimroj          #+#    #+#             */
/*   Updated: 2021/10/26 16:04:27 by tsuimroj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_char_or_number(char *str, int index)
{
	return (((str[index] >= 'A' && str[index] <= 'Z')
			|| (str[index] >= 'a' && str[index] <= 'z')
			|| (str[index] >= '0' && str[index] <= '9')));
}

char	*ft_strcapitalize(char *str)
{
	int	index;
	int	previous;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	index = 1;
	while (str[index] != '\0')
	{
		if (str[index] >= 'A' && str[index] <= 'Z')
			str[index] += 32;
		previous = index - 1;
		if (!is_char_or_number(str, previous))
		{
			if (str[index] >= 'a' && str[index] <= 'z')
				str[index] -= 32;
		}
		index++;
	}
	return (str);
}
