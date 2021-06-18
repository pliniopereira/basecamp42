/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plpereir <plpereir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 16:36:10 by plpereir          #+#    #+#             */
/*   Updated: 2021/04/13 18:44:12 by plpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int c;
	int booleano;

	booleano = 1;
	c = 0;
	while (str[c])
	{
		if ((str[c] < 'A' || str[c] > 'Z') && (str[c] < 'a' || str[c] > 'z'))
			booleano = 0;
		c++;
	}
	return (booleano);
}
