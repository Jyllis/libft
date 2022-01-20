/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kone <jylikarp@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 13:37:43 by kone              #+#    #+#             */
/*   Updated: 2022/01/17 21:17:28 by kone             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The strcat() function appends the src string to the dest string, overwriting
** the terminating null byte ('\0') at the end of dest, and then 
** adds a terminating null byte. The strings may not overlap, and the dest
** string  must  have  enough  space  for  the result. 
** If dest is not large enough, program behavior is unpredictable;
** buffer overruns are a favorite avenue for attacking secure programs.
** The strncat() function is similar, except that
**       *  it will use at most n bytes from src; and
**       *  src does not need to be null-terminated if it contains
**			n or more bytes.
** As with strcat(), the resulting string in dest is always null-terminated.
** If src contains n or more bytes, strncat() writes n+1 bytes to dest 
** (n from src plus  the  terminating  null byte).  
** Therefore, the size of dest must be at least strlen(dest)+n+1.
*/

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	dest_len;
	size_t	i;

	i = 0;
	dest_len = ft_strlen(dest);
	if (n > 0 && src[i] != '\0')
	{
		while (i < n && src[i])
		{
			dest[dest_len + i] = src[i];
			i++;
		}
		dest[dest_len + i] = '\0';
	}
	return (dest);
}
