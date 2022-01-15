/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kone <jylikarp@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 12:23:07 by kone              #+#    #+#             */
/*   Updated: 2022/01/15 14:45:48 by kone             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The memcpy() function copies n bytes from memory area src
** to memory area dst.  If dst and src overlap, behavior is undefined.
*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dst;
	unsigned char	*from;

	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	from = (unsigned char *)src;
	dst = (unsigned char *)dest;
	while (i < n)
	{
		dst[i] = from[i];
		i++;
	}
	return (dest);
}
