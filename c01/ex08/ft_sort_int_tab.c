/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <rel-mora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 09:00:06 by rel-mora          #+#    #+#             */
/*   Updated: 2023/08/20 15:21:27 by rel-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;

	a = 0;
	while (a < size -1)
	{
		b = a + 1;
		while (b < size)
		{
			if (tab[a] > tab[b])
			{
				swap(&tab[a], &tab[b]);
			}
			b++;
		}
		a++;
	}
}
