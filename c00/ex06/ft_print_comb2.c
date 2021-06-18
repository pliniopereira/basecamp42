/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plpereir <plpereir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 23:01:28 by plpereir          #+#    #+#             */
/*   Updated: 2021/04/15 03:14:25 by plpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


void	print_chars(char dezena, char unidade)
{
	write(1, &dezena, 1);
	write(1, &unidade, 1);
}

void	ft_print_duplas(int numero)
{
	char dezena;
	char unidade;


	dezena = (numero / 10) + 48;
	unidade = (numero % 10) + 48;
	print_chars(dezena, unidade);
}

void	ft_print_comb2(void)
{
	int contador;
	int segunda_dupla;

	contador = 0;
	while (contador <= 99)
	{
		segunda_dupla = contador + 1;
		while (segunda_dupla <= 99)
		{
			ft_print_duplas(contador);
			write(1, " ", 1);
			ft_print_duplas(segunda_dupla);
			if (contador != 98 || segunda_dupla != 99)
			{
				write(1, ", ", 2);
			}
			segunda_dupla++;
		}
		contador++;
	}
}
