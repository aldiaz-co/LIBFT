/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldiaz-c <aldiaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 16:11:13 by aldiaz-c          #+#    #+#             */
/*   Updated: 2022/05/05 17:01:42 by aldiaz-c         ###   ########.fr       */
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
	size_t	i;
	size_t	j;
	char	*trimmed_str;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && ft_check_charset(s1[i], set) == 1)
		i++;
	j = ft_strlen((char *)s1) - 1;
	while (j > i && ft_check_charset(s1[j], set) == 1)
		j--;
	trimmed_str = ft_substr(s1, i, (j - i + 1));
	if (!trimmed_str)
		return (NULL);
	return (trimmed_str);
}
