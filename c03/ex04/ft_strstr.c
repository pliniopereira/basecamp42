/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plpereir <plpereir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 16:46:12 by plpereir          #+#    #+#             */
/*   Updated: 2021/04/15 19:19:18 by plpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	c;
	int	c_to_find;

	c = 0;
	c_to_find = 0;
	if (*to_find == '\0')
		return (str);
	while (str[c])
	{
		c_to_find = 0;
		while (str[c + c_to_find] == to_find[c_to_find])
		{
			if (to_find[c_to_find + 1] == '\0')
				return (str + c);
			c_to_find++;
		}
		c++;
	}
	return (0);
}
