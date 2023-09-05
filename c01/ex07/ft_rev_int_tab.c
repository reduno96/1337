/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <rel-mora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 23:37:05 by rel-mora          #+#    #+#             */
/*   Updated: 2023/08/20 08:17:36 by rel-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	fs;
	int	ed;
	int	tp;

	fs = 0;
	ed = size - 1;
	while (fs < ed)
	{
		tp = tab[fs];
		tab[fs] = tab[ed];
		tab[ed] = tp;
		fs++;
		ed--;
	}
}
