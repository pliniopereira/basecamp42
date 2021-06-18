/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plpereir <plpereir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 17:59:55 by plpereir          #+#    #+#             */
/*   Updated: 2021/04/13 19:14:23 by plpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int c;
	int booleano;

	c = 0;
	booleano = 1;
	while (str[c])
	{
		if (str[c] < 32 || str[c] > 126)
			booleano = 0;
		c++;
	}
	return (booleano);
}
