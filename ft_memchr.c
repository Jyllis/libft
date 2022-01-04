/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylikarp <jylikarp@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:52:11 by jylikarp          #+#    #+#             */
/*   Updated: 2021/12/31 12:27:48 by kone             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
 * Function locates the first occurrence of c (converted to anunsigned char)
 * in string s. Returns a pointer to the byte located, or NULL if
 * no such byte exists within n bytes.
 */

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	character;
	unsigned char	*str;

	character = (unsigned char)c;
	str = (unsigned char *)s;
	i = 0;
	if (!s || !c)
		return (NULL);
	while (i < n)
	{
		if (*str == character)
			return (str);
		str++;
		i++;
	}
	return (NULL);
}
