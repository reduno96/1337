/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <rel-mora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 14:01:34 by rel-mora          #+#    #+#             */
/*   Updated: 2023/08/24 15:30:06 by rel-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	length_src;
	unsigned int	i;

	length_src = 0;
	i = 0;
	while (src[i])
	{
		length_src++;
		i++;
	}
	if (size == 0)
	{
		return (length_src);
	}
	i = 0;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (length_src);
}
