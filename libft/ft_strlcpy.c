/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldiaz-c <aldiaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 11:29:04 by aldiaz-c          #+#    #+#             */
/*   Updated: 2022/05/16 18:41:30 by aldiaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size)
	{
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}



/*
{
	size_t	i;
	size_t	y;

	i = ft_strlen(src);
	y = 0;
	if (size == 0)
		return (i);
	while (src[y] && y < size - 1)
	{
		dest[y] = src[y];
		y++;
	}
	if (i < size)
		dest[y] = '\0';
	while (src[y])
		y++;
	return (y);
}*/
