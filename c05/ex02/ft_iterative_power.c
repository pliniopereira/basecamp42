/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plpereir <plpereir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 18:28:20 by plpereir          #+#    #+#             */
/*   Updated: 2021/04/16 18:56:25 by plpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int c;
	int number;

	number = nb;
	c = 1;
	if (power == 0)
		return (1);
	if (power > 0)
	{
		while (c < power)
		{
			nb *= number;
			c++;
		}
		return (nb);
	}
	return (0);
}
