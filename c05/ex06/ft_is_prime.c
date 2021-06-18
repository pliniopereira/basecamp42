/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plpereir <plpereir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 19:44:43 by plpereir          #+#    #+#             */
/*   Updated: 2021/04/16 21:12:18 by plpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int c;

	c = 1;
	while (c * c < nb && c < 46340)
		c++;
	return (c);
}

int	ft_is_prime(int nb)
{
	int c;
	int cprimo;
	int raiz;

	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	raiz = ft_sqrt(nb);
	c = 1;
	cprimo = 1;
	while (c <= raiz)
	{
		if (nb % c == 0)
			cprimo++;
		else if (cprimo == 3)
			c = nb;
		c++;
	}
	if (cprimo == 2)
		return (1);
	return (0);
}
