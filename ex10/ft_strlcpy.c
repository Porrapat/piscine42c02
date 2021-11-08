/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppetchda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 23:52:59 by porrapat          #+#    #+#             */
/*   Updated: 2021/10/24 23:53:55 by porrapat         ###   ########.fr       */
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
