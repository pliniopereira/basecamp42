/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plpereir <plpereir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 22:54:48 by plpereir          #+#    #+#             */
/*   Updated: 2021/04/13 01:44:32 by plpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int *tab_saida;
	int half_size;

	half_size = size / 2;
	tab_saida = tab + size - 1;
	while (half_size > 0)
	{
		ft_swap(tab, tab_saida);
		tab++;
		tab_saida--;
		half_size--;
	}
}
