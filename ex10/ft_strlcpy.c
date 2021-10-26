/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuimroj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 18:18:42 by tsuimroj          #+#    #+#             */
/*   Updated: 2021/10/25 18:35:33 by tsuimroj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	length_of_source(char *src)
{
	unsigned int	counter;

	counter = 0;
	while (src[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	length_of_source_string;
	unsigned int	index;

	if (size > 0)
	{
		index = 0;
		while (src[index] != '\0' && index < size - 1)
		{
			dest[index] = src[index];
			index++;
		}
		dest[index] = '\0';
	}
	length_of_source_string = length_of_source(src);
	return (length_of_source_string);
}
