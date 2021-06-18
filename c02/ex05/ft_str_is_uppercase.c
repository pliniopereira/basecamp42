/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plpereir <plpereir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 17:52:01 by plpereir          #+#    #+#             */
/*   Updated: 2021/04/13 18:50:24 by plpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int c;
	int booleano;

	booleano = 1;
	c = 0;
	while (str[c])
	{
		if (str[c] < 'A' || str[c] > 'Z')
			booleano = 0;
		c++;
	}
	return (booleano);
}
