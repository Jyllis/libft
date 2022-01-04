/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylikarp <jylikarp@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:32:33 by jylikarp          #+#    #+#             */
/*   Updated: 2021/11/22 15:47:27 by jylikarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Creates a new string with the size of size +1
** Fills it with \0
*/

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*str;

	i = 0;
	str = malloc(sizeof (char) * (size + 1));
	if (!(str))
		return (NULL);
	while (i <= size)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}
