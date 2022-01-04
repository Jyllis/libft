/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kone <jylikarp@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 10:25:18 by kone              #+#    #+#             */
/*   Updated: 2021/12/11 18:06:04 by jylikarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*newstr;
	size_t	i;

	i = 0;
	if (s)
	{
		newstr = ft_strnew(len + 1);
		if (newstr == NULL || ft_strlen(s) < len || len <= 0)
			return (NULL);
		while (i < len)
		{
			newstr[i] = s[start + i];
			i++;
		}
		newstr[i] = '\0';
		return (newstr);
	}
	return (NULL);
}
