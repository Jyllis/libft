/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kone <jylikarp@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 10:25:18 by kone              #+#    #+#             */
/*   Updated: 2022/01/15 23:16:24 by kone             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*newstr;
	size_t	i;

	i = 0;
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (*s != '\0')
	{
		newstr = ft_strnew(len);
		if (newstr == NULL || ft_strlen(s) < len || len <= 0)
			return (NULL);
		while (i < len && s[start] != '\0')
		{
			newstr[i] = s[start];
			i++;
			start++;
		}
		newstr[i] = '\0';
		return (newstr);
	}
	return (NULL);
}
