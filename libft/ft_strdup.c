/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldiaz-c <aldiaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 11:36:06 by aldiaz-c          #+#    #+#             */
/*   Updated: 2022/06/08 19:12:17 by aldiaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		i;
	char	*cop_str;

	i = 0;
	cop_str = (char *)str;
	cop_str = malloc(sizeof(*cop_str) * ft_strlen((char *)str) + 1);
	if (!cop_str)
		return (NULL);
	while (str[i])
	{
		cop_str[i] = str[i];
		i++;
	}
	cop_str[i] = '\0';
	return (cop_str);
}
