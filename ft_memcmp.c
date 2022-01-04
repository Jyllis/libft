/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylikarp <jylikarp@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 16:18:12 by jylikarp          #+#    #+#             */
/*   Updated: 2021/12/29 20:12:19 by kone             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function compares byte string s1 against byte string s2. Both strings are
** assumed to be n bytes long.
** The memcmp() function returns zero if the two strings are identical, 
** otherwise returns the difference between the first two differing bytes
** (treated as unsigned char values, so that `\200' is greater than `\0',
** for example).  Zero-length strings are always identical. This behavior
** is not required by C and portable code should only depend on the sign of
** the returned value.
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		while (str1[i] == str2[i])
			i++;
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
	}
	return (0);
}
