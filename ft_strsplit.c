/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kone <jylikarp@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 14:37:04 by kone              #+#    #+#             */
/*   Updated: 2021/12/31 13:08:05 by kone             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordlenght(char *s, char c)
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
			i = 1;
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
	newstr = (char **)malloc(sizeof(*newstr) * (ft_n_words((char *)s, c) + 1));
	if (!newstr)
		return (NULL);
	while (wordcnt--)
	{
		while (*s == c && *s)
			s++;
		newstr[i] = ft_strsub(s, 0, ft_wordlenght((char *)s, c));
		if (!newstr[i])
			return (NULL);
		s = s + ft_wordlenght((char *)s, c);
		i++;
	}
	newstr[i] = NULL;
	return (newstr);
}
