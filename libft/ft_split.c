/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldiaz-c <aldiaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 16:11:53 by aldiaz-c          #+#    #+#             */
/*   Updated: 2022/06/07 17:51:24 by aldiaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	int	i;
	int	words_tot;

	i = 0;
	words_tot = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			words_tot++;
		i++;
	}
	return (words_tot);
}

static size_t	ft_size_words(const char *s, char c, int word, int *i)
{
	size_t	j;

	*i = 0;
	j = 0;
	if (s[0] != c)
		word--;
	while (s[*i] && word > 0)
	{
		if (s[*i] == c && (s[(*i) + 1] != c && s[(*i) + 1] != '\0'))
		{
			word--;
		}
		(*i)++;
	}
	while (!word && (s[(*i) + j] != c && s[(*i) + j]))
		j++;
	return (j);
}

static char	*ft_write_words(const char *s, char *matrix, char c, int i)
{
	int	j;

	j = 0;
	while (s[i + j] != c && s[i + j])
	{
		matrix[j] = s[i + j];
		j++;
	}
	matrix[j] = '\0';
	return (matrix);
}

static char	*ft_matrix(const char *s, char c, char **matrix, int word)
{
	int	k;
	int	i;

	i = 0;
	k = 0;
	matrix[word] = malloc(sizeof(*matrix[word])
			* ft_size_words(s, c, word + 1, &i) + 1);
	if (!matrix[word])
	{
		while (k < word)
		{
			free(matrix[k]);
			k++;
		}
		free(matrix);
		return (NULL);
	}
	matrix[word] = ft_write_words(s, matrix[word], c, i);
	return (matrix[word]);
}

char	**ft_split(const char *s, char c)
{	
	int		words_tot;
	int		word;
	char	**matrix;

	if (!s)
		return (NULL);
	word = 0;
	words_tot = ft_count_words(s, c);
	matrix = malloc(sizeof(*matrix) * (words_tot + 1));
	if (!matrix)
		return (NULL);
	while (word < words_tot)
	{
		matrix[word] = ft_matrix(s, c, matrix, word);
		if (!matrix[word])
			return (NULL);
		word++;
	}
	matrix[word] = NULL;
	return (matrix);
}
