/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kone <jylikarp@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 13:55:54 by kone              #+#    #+#             */
/*   Updated: 2021/12/31 12:33:51 by kone             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	i = 0;
	src_len = ft_strlen(src);
	while (dest[i] && size > 0)
	{
		i++;
		size--;
	}
	while (src[i] && size-- > 1)
		dest[i] = src[i];
	if (size == 1 || src[i] == 0)
		dest[i] = '\0';
	return (src_len + i);
}
