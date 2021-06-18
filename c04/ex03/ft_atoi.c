/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plpereir <plpereir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 19:45:28 by plpereir          #+#    #+#             */
/*   Updated: 2021/04/16 02:43:05 by plpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int c;
	int pos_or_neg;
	int number;

	c = 0;
	pos_or_neg = 0;
	number = 0;
	while (str[c] < '0' || str[c] > '9')
	{
		if (str[c] == '-')
			pos_or_neg++;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		number = number * 10 + (str[c] - '0');
		c++;
	}
	if ((pos_or_neg % 2) != 0)
		number *= -1;
	return (number);
}
