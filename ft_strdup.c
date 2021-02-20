/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avalerio <avalerio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 00:58:33 by avalerio          #+#    #+#             */
/*   Updated: 2021/02/18 15:50:34 by avalerio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	int		i;

	dup = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (*(s + i) != '\0')
	{
		*(dup + i) = *(s + i);
		i++;
	}
	*(dup + i) = '\0';
	return (dup);
}
