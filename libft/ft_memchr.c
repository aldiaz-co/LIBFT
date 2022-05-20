/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldiaz-c <aldiaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 10:54:41 by aldiaz-c          #+#    #+#             */
/*   Updated: 2022/05/16 18:31:07 by aldiaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr_str;

	i = 0;
	ptr_str = (unsigned char *) str;
	while (i < len)
	{
		if (ptr_str[i] == (unsigned char)c)
			return (&ptr_str[i]);
		i++;
	}
	return (NULL);
}
