/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plpereir <plpereir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 20:23:43 by plpereir          #+#    #+#             */
/*   Updated: 2021/04/04 21:44:28 by plpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char unidade;
	char dezena;
	char centena;

	centena = '0';
	while (centena <= '7')
	{
		dezena = centena + 1;
		while (dezena <= '9')
		{
			unidade = dezena + 1;
			while (unidade <= '9')
			{
				write(1, &centena, 1);
				write(1, &dezena, 1);
				write(1, &unidade, 1);
				if (centena != '7')
					write(1, ", ", 2);
				unidade += 1;
			}
			dezena += 1;
		}
		centena += 1;
	}
}
