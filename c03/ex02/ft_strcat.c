/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plpereir <plpereir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 04:17:41 by plpereir          #+#    #+#             */
/*   Updated: 2021/04/15 16:35:20 by plpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int c_dest;
	int c_src;

	c_dest = 0;
	c_src = 0;
	while (dest[c_dest])
		c_dest++;
	while (src[c_src])
	{
		dest[c_dest + c_src] = src[c_src];
		c_src++;
	}
	dest[c_dest + c_src] = '\0';
	return (dest);
}
