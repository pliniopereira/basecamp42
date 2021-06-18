/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plpereir <plpereir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 17:48:45 by plpereir          #+#    #+#             */
/*   Updated: 2021/04/13 18:48:55 by plpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int c;
	int booleano;

	booleano = 1;
	c = 0;
	while (str[c])
	{
		if (str[c] < 'a' || str[c] > 'z')
			booleano = 0;
		c++;
	}
	return (booleano);
}
