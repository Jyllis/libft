/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylikarp <jylikarp@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 09:45:23 by jylikarp          #+#    #+#             */
/*   Updated: 2022/01/17 19:48:46 by kone             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
** Erases the data in the n bytes of the memory starting at the location
** point to by s, by writing zeros (bytes containing '\0' to that area. 
*/

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (n > 0)
	{
		((char *)s)[i] = 0;
		i++;
		n--;
	}
}
