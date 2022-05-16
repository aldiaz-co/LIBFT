/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldiaz-c <aldiaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 14:36:34 by aldiaz-c          #+#    #+#             */
/*   Updated: 2022/04/27 12:44:36 by aldiaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		len_str;

	str = (char *)s;
	len_str = ft_strlen(str);
	while (len_str >= 0)
	{
		if (str[len_str] == (char) c)
			return (&str[len_str]);
		len_str--;
	}
	return (NULL);
}
