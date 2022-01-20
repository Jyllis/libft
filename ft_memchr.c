/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylikarp <jylikarp@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:52:11 by jylikarp          #+#    #+#             */
/*   Updated: 2022/01/17 20:16:43 by kone             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
** Function locates the first occurrence of c (converted to anunsigned char)
** in string s. Returns a pointer to the byte located, or NULL if
** no such byte exists within n bytes.
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	character;
	unsigned char	*str;

	character = (unsigned char)c;
	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*str == character || *str == '\0')
			return ((unsigned char *)str);
		str++;
		i++;
	}
	return (NULL);
}
