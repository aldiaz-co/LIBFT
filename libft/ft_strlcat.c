/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldiaz-c <aldiaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 11:30:41 by aldiaz-c          #+#    #+#             */
/*   Updated: 2022/05/05 16:57:20 by aldiaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = ft_strlen(dest);
	k = j;
	if (size < 1)
		return (ft_strlen((char *)src) + size);
	while (src[i] && j < size - 1)
	{
		dest [j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	if (size < ft_strlen(dest))
		return (ft_strlen((char *)src) + size);
	else
		return (ft_strlen((char *)src) + k);
}
