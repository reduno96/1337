/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <rel-mora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:39:22 by rel-mora          #+#    #+#             */
/*   Updated: 2023/09/04 17:05:51 by rel-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <stdio.h>*/

int	ft_size(int min, int max)
{
	int	i;

	i = 0;
	while (min < max)
	{
		i++;
		min++;
	}
	return (i);
}

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;
	int	size;

	i = 0;
	if (min >= max)
		return (NULL);
	size = ft_size(min, max);
	range = malloc((sizeof(int) * size));
	if (range == NULL)
		return (NULL);
	while (min < max)
	{
		range[i++] = min;
		min++;
	}
	return (range);
}
/*
int main ()
{
	int i;
	
	i = 0;
	int *rarar = ft_range(0, 5);
	while (i < 5)
	{
		printf("%d", rarar[i]);
		i++;
	}
}
*/
