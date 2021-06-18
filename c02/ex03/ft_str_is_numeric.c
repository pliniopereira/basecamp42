/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plpereir <plpereir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 17:44:16 by plpereir          #+#    #+#             */
/*   Updated: 2021/04/13 18:47:25 by plpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int c;
	int booleano;

	booleano = 1;
	c = 0;
	while (str[c])
	{
		if (str[c] < '0' || str[c] > '9')
			booleano = 0;
		c++;
	}
	return (booleano);
}
