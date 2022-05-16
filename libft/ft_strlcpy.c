/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldiaz-c <aldiaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 11:29:04 by aldiaz-c          #+#    #+#             */
/*   Updated: 2022/05/05 17:51:13 by aldiaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	y;

	i = 0;
	y = 0;
	while (src[i])
		i++;
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
}
