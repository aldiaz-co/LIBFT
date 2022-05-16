/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldiaz-c <aldiaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 13:11:04 by aldiaz-c          #+#    #+#             */
/*   Updated: 2022/05/05 17:00:06 by aldiaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	o;

	i = 0;
	if (*to_find == '\0')
		return ((char *)str);
	while (str[i] && i < len)
	{
		o = 0;
		while ((str[i + o] == to_find[o]) && (i + o < len))
		{
			if (to_find[o + 1] == '\0')
				return ((char *)&str[i]);
			o++;
		}
		i++;
	}
	return (NULL);
}
