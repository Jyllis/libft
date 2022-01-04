/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kone <jylikarp@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 13:18:18 by kone              #+#    #+#             */
/*   Updated: 2021/11/27 13:35:33 by kone             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The function copies bytes from string src to string dst. 
** If the character c (as converted to an unsigned char) 
** occurs in the string src, the copy stops and
** a pointer to the byte after the copy of c in the string dst is returned.
** Otherwise, n bytes are copied, and a NULL pointer is returned.
** It uses pointers dest and from to point to source and dst.
** They are typecasted to unsigned cha
*/

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*from;
	unsigned char	*dest;

	i = 0;
	from = (unsigned char *)src;
	dest = (unsigned char *)dst;
	if (!dst || !src)
		return (NULL);
	if (!n || dst == src)
		return (NULL);
	while (i < n)
	{
		dest[i] = from[i];
		if (from[i] == (unsigned char)c)
			return (&dest[i + 1]);
		i++;
	}
	return (NULL);
}
