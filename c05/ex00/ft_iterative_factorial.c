/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plpereir <plpereir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 18:04:39 by plpereir          #+#    #+#             */
/*   Updated: 2021/04/17 00:17:25 by plpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int number;
	int c;

	number = 1;
	c = 1;
	if (nb < 0)
		return (0);
	while (c <= nb)
	{
		number = number * c;
		c++;
	}
	return (number);
}
