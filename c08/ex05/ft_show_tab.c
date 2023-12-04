/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <rel-mora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 21:33:58 by rel-mora          #+#    #+#             */
/*   Updated: 2023/09/07 13:04:51 by rel-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	put_char(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		put_char(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		put_char('-');
		put_char('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		put_char('-');
		nb = -nb;
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		put_char(nb + '0');
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		put_char('\n');
		ft_putnbr(par[i].size);
		put_char('\n');
		ft_putstr(par[i].copy);
		put_char('\n');
		i++;
	}
}
/*
int main(void)
{
    // Create an array of t_stock_str structures
    t_stock_str arr[3];

    // Fill in the structures with sample data
    arr[0].size = 5;
    arr[0].str = "Hello";
    arr[0].copy = "Copy of Hello";

    arr[1].size = 7;
    arr[1].str = "Welcome";
    arr[1].copy = "Copy of Welcome";

    arr[2].size = 4;
    arr[2].str = "OpenAI";
    arr[2].copy = "Copy of OpenAI";

    // Call the ft_show_tab function with the array
    ft_show_tab(arr);

    return (0);
}
*/
