/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylikarp <jylikarp@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 10:52:02 by jylikarp          #+#    #+#             */
/*   Updated: 2021/12/31 12:31:31 by kone             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Fills bytestring b with byte value c. In row 28 the index of b is
** typecasted into a unsigned char so that it can copy the value of c.
*/

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	if (b == NULL)
		return (NULL);
	while (i < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}
