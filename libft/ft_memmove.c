/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldiaz-c <aldiaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 09:05:10 by aldiaz-c          #+#    #+#             */
/*   Updated: 2022/04/27 13:31:20 by aldiaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*dst2;
	const unsigned char	*src2;

	dst2 = (unsigned char *)dst;
	src2 = (unsigned char *)src;
	i = 0;
	if (!dst2 && !src2)
		return (NULL);
	if (src2 < dst2)
		while (++i <= len)
			dst2[len - i] = src2[len - i];
	else
		while (len-- > 0)
			*(dst2++) = *(src2++);
	return (dst);
}
