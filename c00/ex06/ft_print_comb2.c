/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <rel-mora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 10:55:49 by rel-mora          #+#    #+#             */
/*   Updated: 2023/08/19 12:06:39 by rel-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	put_char(char c)
{
	write (1, &c, 1);
}

void	print_num(int n1, int n2)
{
	put_char((n1 / 10) + '0');
	put_char((n1 % 10) + '0');
	put_char(' ');
	put_char((n2 / 10) + '0');
	put_char((n2 % 10) + '0');
	if (n1 < 98)
	{
		put_char(',');
		put_char(' ');
	}
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	while (n1 <= 98)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			print_num (n1, n2);
			n2++;
		}
		n1++;
	}
	return ;
}
