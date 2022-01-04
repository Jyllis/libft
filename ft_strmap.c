/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylikarp <jylikarp@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 09:00:03 by jylikarp          #+#    #+#             */
/*   Updated: 2021/12/31 12:45:55 by kone             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*tmp;

	tmp = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!s || !tmp)
		return (NULL);
	i = 0;
	while (s[i])
	{
		tmp[i] = f(s[i]);
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
