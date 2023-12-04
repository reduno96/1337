/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <rel-mora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:36:11 by rel-mora          #+#    #+#             */
/*   Updated: 2023/09/07 21:18:05 by rel-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_length(char *str)
{
	int		i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*copie;
	int		i;

	i = 0;
	while (src[i])
		i++;
	copie = malloc((sizeof(char) * i + 1));
	i = 0;
	if (!copie)
		return (0);
	while (src[i])
	{
		copie[i] = src[i];
		i++;
	}
	copie[i] = '\0';
	return (copie);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*stock;
	int			i;

	i = 0;
	stock = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!stock)
		return (0);
	while (i < ac)
	{
		stock[i].size = ft_length(av[i]);
		stock[i].str = av[i];
		stock[i].copy = ft_strdup(av[i]);
		i++;
	}
	stock[i].str = 0;
	stock[i].size = 0;
	stock[i].copy = 0;
	return (stock);
}
