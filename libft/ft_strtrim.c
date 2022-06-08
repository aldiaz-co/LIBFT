/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldiaz-c <aldiaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 16:11:13 by aldiaz-c          #+#    #+#             */
/*   Updated: 2022/06/08 19:13:36 by aldiaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_charset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trimmed_str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_check_charset(s1[start], set) == 1)
		start++;
	end = ft_strlen((char *)s1) - 1;
	while (end > start && ft_check_charset(s1[end], set) == 1)
		end--;
	trimmed_str = ft_substr(s1, start, (end - start + 1));
	if (!trimmed_str)
		return (NULL);
	return (trimmed_str);
}
