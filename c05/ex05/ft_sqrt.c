/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <rel-mora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 19:26:08 by rel-mora          #+#    #+#             */
/*   Updated: 2023/08/31 01:42:39 by rel-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb == 0)
		return (0);
	else if (nb == 1)
		return (1);
	else
	{
		while (i <= 46360)
		{
			if (i * i == nb)
			{
				return (i); 
			}
			i++;
		}
	}
	return (0);
}
