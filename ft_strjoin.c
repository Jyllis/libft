/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kone <jylikarp@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 11:55:31 by kone              #+#    #+#             */
/*   Updated: 2022/01/20 12:23:59 by kone             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates and returns a "fresh" string ending with '\0', result 
** of concatenation of s1 and s2. If the allocation fails the function returns
** NULL.
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	j;
	size_t	k;

	if (!s1 || !s2)
		return (NULL);
	j = 0;
	k = 0;
	newstr = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!newstr)
		return (NULL);
	while (s1[j] != '\0')
	{
		newstr[j] = (char)s1[j];
		j++;
	}
	while (s2[k] != '\0')
	{
		newstr[j] = (char)s2[k];
		k++;
		j++;
	}
	newstr[j] = '\0';
	return (newstr);
}
