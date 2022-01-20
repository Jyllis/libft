/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kone <jylikarp@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 14:37:04 by kone              #+#    #+#             */
/*   Updated: 2022/01/20 13:09:06 by kone             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates (with malloc(3)) and returns an array of “fresh” strings 
** (all ending with ’\0’, including the array itself) obtained by splitting 
** s using the character c as a delimiter. If the allocation fails
** the function returns NULL.
*/

static int	ft_wordlength(char *s, char c)
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

char	**ft_strsplit(char const *s, char c)
{
	char	**newstr;
	int		wordcnt;
	int		i;

	i = 0;
	wordcnt = ft_n_words((char *)s, c);
	newstr = (char **)malloc(sizeof(char *) * (wordcnt + 1));
	if (!newstr)
		return (NULL);
	while (wordcnt--)
	{
		while (*s == c && *s)
			s++;
		newstr[i] = ft_strsub(s, 0, ft_wordlength((char *)s, c));
		if (!newstr[i])
		{
			ft_freestrofstr(newstr);
			return (NULL);
		}
		s = s + ft_wordlength((char *)s, c);
		i++;
	}
	newstr[i] = NULL;
	return (newstr);
}
