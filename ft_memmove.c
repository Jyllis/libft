/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kone <jylikarp@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 13:39:05 by kone              #+#    #+#             */
/*   Updated: 2022/01/10 16:30:23 by kone             ###   ########.fr       */
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
	if (src == dst)
		return (dst);
	if (src < dst)
	{
		while (len--)
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
	}
	if (src > dst)
	{
		ft_memcpy(dst, src, len);
	}
	return (dst);
}
