/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plpereir <plpereir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 20:00:53 by plpereir          #+#    #+#             */
/*   Updated: 2021/04/14 14:03:39 by plpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int c;
	int change_bool;

	c = 0;
	change_bool = 1;
	while (str[c])
	{
		if (str[c] >= 'A' && str[c] <= 'Z')
			str[c] += 32;
		if (str[c] >= 'a' && str[c] <= 'z')
		{
			if (change_bool == 1)
				str[c] -= 32;
			change_bool = 0;
		}
		else if (str[c] >= '0' && str[c] <= '9')
			change_bool = 0;
		else
			change_bool = 1;
		c++;
	}
	return (str);
}
