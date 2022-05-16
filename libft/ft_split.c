/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldiaz-c <aldiaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 16:11:53 by aldiaz-c          #+#    #+#             */
/*   Updated: 2022/05/05 18:51:17 by aldiaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_word(const char *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[j])
	{
		if (s[j] == c)
			i++;
		j++;
	}
	return (i);
}

int	ft_count_str(char const *s, char c, int a)
{
	int	i;

	i = 0;
	while (s[a] != c)
	{
		a++;
		i++;
	}
	return (i);
}

char	ft_copy(char *dest, const char *s, char c, int a)
{
	int	y;

	y = 0;
	while (s[a] != c)
	{
		dest[y] = s[a];
		y++;
		a++;
	}
	return (a);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		a;

	a = 0;
	tab = malloc(sizeof(tab) * (ft_count_word(s, c) + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (s[a])
	{
		if (s[a] != c)
		{
			tab[i] = malloc(sizeof(char) * ft_count_str(s, c, a) + 1);
			if (!tab)
				return (0);
			a = ft_copy(tab[i], s, c, a);
			i++;
		}
		a++;
	}
	tab[i] = 0;
	return (tab);
}

/*
int	main(int c, char *v[])
{
    int i = 0;
    char **tab;

    if (c!=3)
        return (0);
    tab = ft_split(v[1], v[2][0]);
    while (tab[i])
    {
        printf("%s\n", tab[i]);
        i++;
    }
    return (0);
}*/