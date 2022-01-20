/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kone <jylikarp@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 12:29:08 by kone              #+#    #+#             */
/*   Updated: 2022/01/17 21:38:56 by kone             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Locates the first occurrence of the null-terminated string *find 
** in the string *from where not more than len characters are searched. 
** Characters that appear after a ‘\0’ character are not searched.
*/

char	*ft_strnstr(const char *from, const char *find, size_t n)
{
	size_t	pos_n;
	size_t	pos_h;
	size_t	len;
	size_t	lenh;

	len = ft_strlen(find);
	lenh = ft_strlen(from);
	pos_h = 0;
	if (len == 0 || (int)len == -1 || n == 0)
		return ((char *)&from[pos_h]);
	while (from[pos_h] != '\0' && len <= lenh && pos_h < n)
	{
		pos_n = 0;
		while (from[pos_h + pos_n] && from[pos_h + pos_n] == find[pos_n]
			&& (len + pos_h) <= n)
		{
			if (!find[pos_n + 1])
				return ((char *)&from[pos_h]);
			pos_n++;
		}
		pos_h++;
	}
	return (NULL);
}
