/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylikarp <jylikarp@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 14:57:51 by jylikarp          #+#    #+#             */
/*   Updated: 2022/01/15 21:03:55 by kone             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_start(char const *s)
{
	size_t	i;

	i = 0;
	while (s[i] == '\t' || s[i] == '\n' || s[i] == ' ')
		i++;
	return (i);
}

static size_t	ft_end(char const *s)
{
	size_t	i;

	i = ft_strlen(s);
	while (s[i] == '\t' || s[i] == '\n' || s[i] == ' ' || s[i] == '\0')
		i--;
	return (i);
}

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	char	*helper;

	helper = "";
	if (*s == '\0' || s == helper)
		return (ft_strdup("\0"));
	if (!s)
		return (NULL);
	i = ft_start(s);
	j = ft_end(s);
	return (ft_strsub(s, i, j - i + 1));
}
