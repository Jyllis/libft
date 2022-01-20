/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylikarp <jylikarp@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:32:33 by jylikarp          #+#    #+#             */
/*   Updated: 2022/01/17 21:30:37 by kone             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates and returns a "fresh" string ending with \0. Each character
** of the string is initialized at '\0'. If allocation fails the function
** returns NULL.
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
