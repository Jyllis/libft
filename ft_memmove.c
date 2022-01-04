/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kone <jylikarp@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 13:39:05 by kone              #+#    #+#             */
/*   Updated: 2021/12/31 12:30:03 by kone             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The memmove() function copies len bytes from string src to string dst. 
** The two strings may overlap; the copy is always done in
** a non-destructive manner.
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*from;
	unsigned char	*dest;
	unsigned char	**tmp;

	tmp = 0;
	i = 0;
	if (src == dst)
		return (dst);
	from = (unsigned char *)src;
	dest = (unsigned char *)dst;
	while (i < len)
	{
		((char *)tmp)[i] = ((char *)from)[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		((char *)dest)[i] = ((char *)tmp)[i];
		i++;
	}
	return (dst);
}
