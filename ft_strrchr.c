/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kone <jylikarp@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 15:29:19 by kone              #+#    #+#             */
/*   Updated: 2021/12/31 12:39:01 by kone             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	if (s)
	{
		while (s)
		{
			if (*s == c)
				last = (char *)s;
			s++;
		}
		return (last);
	}		
	return (NULL);
}
