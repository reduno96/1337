/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <rel-mora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 21:15:50 by rel-mora          #+#    #+#             */
/*   Updated: 2023/09/06 14:29:37 by rel-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <stdio.h>*/

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
/*
int main ()
{
	char *str = "rehjkl";
	char *s = ft_strdup(str);
	printf("%s .\n", s);
}
*/
