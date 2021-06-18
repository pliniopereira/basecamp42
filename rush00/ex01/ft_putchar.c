/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejosue-b <ejosue-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 01:07:40 by ejosue-b          #+#    #+#             */
/*   Updated: 2021/04/04 22:01:21 by ejosue-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int size_x, int size_y, int pos_x, int pos_y)
{
	char c;

	c = ' ';
	if (pos_x == 0 || pos_x == size_x - 1)
		c = '*';
	if (pos_y == 0 || pos_y == size_y - 1)
		c = '*';
	(pos_x == 0 && pos_y == 0) ? c = '/' : 'null';
	(pos_x == (size_x - 1) && pos_y == 0) ? c = '\\' : 'null';
	(pos_x == 0 && pos_y == (size_y - 1)) ? c = '\\' : 'null';
	(pos_x == (size_x - 1) && pos_y == (size_y - 1)) ? c = '/' : 'null';
	write(1, &c, 1);
}
