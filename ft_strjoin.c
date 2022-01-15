/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kone <jylikarp@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 11:55:31 by kone              #+#    #+#             */
/*   Updated: 2022/01/15 23:15:22 by kone             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	i;
	size_t	j;
	size_t	k;

	i = ft_strlen(s1) + ft_strlen(s2) + 1;
	j = 0;
	k = 0;
	newstr = ft_strnew(i);
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
