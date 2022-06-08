/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldiaz-c <aldiaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 13:02:12 by aldiaz-c          #+#    #+#             */
/*   Updated: 2022/06/07 15:45:05 by aldiaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t len)
{
	unsigned char	*cop_s1;
	unsigned char	*cop_s2;
	size_t			i;

	cop_s1 = (unsigned char *)s1;
	cop_s2 = (unsigned char *)s2;
	i = 0;
	while (i < len)
	{
		if (cop_s1[i] != cop_s2[i])
			return (cop_s1[i] - cop_s2[i]);
		i++;
	}
	return (0);
}
