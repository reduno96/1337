/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <rel-mora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:51:07 by rel-mora          #+#    #+#             */
/*   Updated: 2023/09/06 14:58:00 by rel-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <stdio.h>*/

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int	ft_size_one(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_length_str(int size, char **strs, char *sep)
{
	int	res;
	int	i;

	i = 0;
	res = 0;
	while (i < size)
	{
		res += ft_size_one(strs[i]);
		res += ft_size_one(sep);
		i++;
	}
	res -= ft_size_one(sep);
	return (res);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		length;
	int		i;

	i = 0;
	if (size <= 0)
	{
		dest = malloc(1);
		return (dest);
	}
	length = ft_length_str(size, strs, sep);
	dest = (char *) malloc(sizeof(char) * length + 1);
	if (!dest)
		return (0);
	while (i < size)
	{
		ft_strcat(dest, strs[i]);
		if (i != size -1)
			ft_strcat(dest, sep);
		i++;
	}
	return (dest);
}
/*
int main ()
{
	char *arr[0]  ={};
	char * sep = "d";
	char  * rrr = ft_strjoin(3, arr, sep);

	printf("%s\n", rrr);

}
*/
