/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kone <jylikarp@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 14:51:14 by kone              #+#    #+#             */
/*   Updated: 2021/12/31 12:37:20 by kone             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*first;

	if (!s)
		return (NULL);
	if (s)
	{
		while (*s != c)
			s++;
		if (*s == c)
		{
			first = (char *)s;
			return (first);
		}
	}
	return (NULL);
}
