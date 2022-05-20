/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldiaz-c <aldiaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 16:10:13 by aldiaz-c          #+#    #+#             */
/*   Updated: 2022/05/18 16:55:01 by aldiaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	char	*ss1;
	char	*ss2;

	if (!s1 || !s2)
		return (NULL);
	ss1 = (char *)s1;
	ss2 = (char *)s2;
	str = malloc(sizeof(str) * (ft_strlen(ss1) + ft_strlen(ss2) + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, ss1, ft_strlen(ss1) + 1);
	ft_strlcat(str, ss2, ft_strlen(ss2) + ft_strlen(ss1) + 1);
	return (str);
}
