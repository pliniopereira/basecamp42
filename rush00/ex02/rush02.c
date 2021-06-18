/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: throdrig <throdrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 16:01:01 by ejosue-b          #+#    #+#             */
/*   Updated: 2021/04/05 01:49:01 by throdrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_putchar(int size_x, int size_y, int pos_x, int pos_y);

void	rush(int size_x, int size_y)
{
	int		pos_x;
	int		pos_y;

	pos_y = 0;
	pos_x = 0;
	while (pos_y < size_y)
	{
		pos_x = 0;
		while (pos_x < size_x)
		{
			ft_putchar(size_x, size_y, pos_x, pos_y);
			pos_x++;
		}
		pos_y++;
		write(1, "\n", 1);
	}
}
