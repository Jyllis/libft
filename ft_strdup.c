/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kone <jylikarp@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 12:05:54 by kone              #+#    #+#             */
/*   Updated: 2021/12/31 12:43:04 by kone             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
** The strdup() function allocates sufficient memory for a copy 
** of the string s1, does the copy, and returns a pointer to it.
** The pointer may subsequently be used as an argument to the function free(3).
** If insufficient memory is available, NULL is returned 
** and errno is set to ENOMEM.
*/

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	i;

	i = 0;
	dup = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (dup == NULL)
		return (dup);
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
