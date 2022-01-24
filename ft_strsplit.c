/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kone <jylikarp@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 14:37:04 by kone              #+#    #+#             */
/*   Updated: 2022/01/24 17:05:20 by kone             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates (with malloc(3)) and returns an array of “fresh” strings 
** (all ending with ’\0’, including the array itself) obtained by splitting 
** s using the character c as a delimiter. If the allocation fails
** the function returns NULL.
** ft_wordlenght calculates length of individual word until delimiter is met.
** ft_n_words calculates amount of individual words in given string s.
** ft_splitter splits the original string in to string consisting of strings
** ft_strsplit gathers the functions together
*/

static int	ft_wordlength(const char *s, char c)
{
	int	len;

	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

static int	ft_n_words(char *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (*s)
	{
		if (word == 1 && *s == c)
			word = 0;
		if (word == 0 && *s != c)
		{
			word = 1;
			i++;
		}
		s++;
	}
	return (i);
}

static int	ft_splitter(int wordcnt, char const *s, char c, char **newstr)
{
	int	i;

	i = 0;
	while (wordcnt--)
	{
		while (*s == c && *s)
			s++;
		newstr[i] = ft_strsub(s, 0, ft_wordlength(s, c));
		if (!newstr[i])
		{
			ft_freestrofstr(newstr);
			return (-1);
		}
		s = s + ft_wordlength(s, c);
		i++;
	}
	return (i);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**newstr;
	int		wordcnt;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	wordcnt = ft_n_words((char *)s, c);
	newstr = (char **)malloc(sizeof(char *) * (wordcnt + 1));
	if (!newstr)
		return (NULL);
	i = ft_splitter(wordcnt, s, c, newstr);
	if (i == -1)
		return (NULL);
	newstr[i] = NULL;
	return (newstr);
}
