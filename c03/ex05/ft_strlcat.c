/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plpereir <plpereir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 16:46:07 by plpereir          #+#    #+#             */
/*   Updated: 2021/04/15 19:10:09 by plpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_dest_length(char *dest, unsigned int size)
{
	unsigned int c;

	c = 0;
	while (dest[c] && c < size)
		c++;
	return (c);
}

unsigned int	ft_strlen(char *src)
{
	unsigned int c;

	c = 0;
	while (src[c])
		c++;
	return (c);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int c;
	unsigned int j;
	unsigned int src_size;

	j = 0;
	c = ft_dest_length(dest, size);
	src_size = ft_strlen(src);
	if (c < size)
	{
		while (c + j < size - 1 && src[j])
		{
			dest[c + j] = src[j];
			j++;
		}
		dest[c + j] = '\0';
	}
	return (c + src_size);
}
