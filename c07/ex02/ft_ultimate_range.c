/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <rel-mora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:27:50 by rel-mora          #+#    #+#             */
/*   Updated: 2023/09/06 11:43:55 by rel-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include <stdlib.h>

int	ft_size(int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
		return (-1);
	while (min < max)
	{
		min++;
		i++;
	}
	return (i);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	i = 0;
	size = ft_size(min, max);
	if (size < 0)
	{
		*range = NULL;
		return (0);
	}
	range[0] = (int *) malloc(sizeof(int) * size);
	if (range == NULL)
		return (-1);
	while (i < size)
	{
		range[0][i] = min;
		min++;
		i++;
	}
	return (size);
}
/*
int main ()
{
	int min = 11;
	int max = 10;
	int *range;
	int d;
	d  = ft_ultimate_range(&range, min, max);
	printf("%d",d);
}
*/
