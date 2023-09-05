/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <rel-mora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 00:29:35 by rel-mora          #+#    #+#             */
/*   Updated: 2023/08/18 23:23:40 by rel-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

void	put_num(char f, char s, char t)
{
	put_char(f);
	put_char(s);
	put_char(t);
	if (f < '7')
	{
		put_char(',');
		put_char(' ');
	}
}

void	ft_print_comb(void)
{
	char	f;
	char	s;
	char	t;

	f = '0';
	while (f <= '7')
	{
		s = f + 1;
		while (s <= '8')
		{
			t = s + 1;
			while (t <= '9')
			{
				put_num (f, s, t);
				t++;
			}
			s++;
		}
		f++;
	}
}
