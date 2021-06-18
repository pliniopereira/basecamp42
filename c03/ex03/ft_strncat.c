/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plpereir <plpereir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 16:37:16 by plpereir          #+#    #+#             */
/*   Updated: 2021/04/15 16:41:32 by plpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				c_dest;
	unsigned int	c_src;

	c_dest = 0;
	c_src = 0;
	while (dest[c_dest])
		c_dest++;
	while (src[c_src] && c_src < nb)
	{
		dest[c_dest + c_src] = src[c_src];
		c_src++;
	}
	dest[c_dest + c_src] = '\0';
	return (dest);
}
