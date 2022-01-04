/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kone <jylikarp@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 13:07:07 by kone              #+#    #+#             */
/*   Updated: 2022/01/04 18:23:35 by kone             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst,	const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len && src != NULL)
	{
		while (src[i] && i <= len)
		{
			dst[i] = src[i];
			i++;
		}
		while (i < len)
		{
			dst[i] = '\0';
			i++;
		}
	}
	return (dst);
}
