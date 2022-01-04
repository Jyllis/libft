/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylikarp <jylikarp@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 14:57:51 by jylikarp          #+#    #+#             */
/*   Updated: 2021/12/31 13:09:27 by kone             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	i;
	unsigned int	j;
	char			*newstr;

	i = 0;
	j = ft_strlen(s);
	if (!s)
		return (NULL);
	while (ft_isspace(s[i]))
		i++;
	while (ft_isspace(s[j - 1]))
		j--;
	newstr = ft_strsub(s, i, j - i);
	if (!newstr)
		return (NULL);
	return (newstr);
}
