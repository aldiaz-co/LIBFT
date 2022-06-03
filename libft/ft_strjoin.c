/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldiaz-c <aldiaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 16:10:13 by aldiaz-c          #+#    #+#             */
/*   Updated: 2022/06/03 18:45:39 by aldiaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	char	*new_s1;
	char	*new_s2;

	if (!s1 || !s2)
		return (NULL);
	new_s1 = (char *)s1;
	new_s2 = (char *)s2;
	str = malloc(sizeof(*str) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, new_s1, ft_strlen(new_s1) + 1);
	ft_strlcat(str, new_s2, ft_strlen(new_s2) + ft_strlen(new_s1) + 1);
	return (str);
}
