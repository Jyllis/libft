/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylikarp <jylikarp@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 09:45:23 by jylikarp          #+#    #+#             */
/*   Updated: 2021/11/22 10:31:55 by jylikarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Because size_t is used in the prototype, we use it also for i.
** While while loop is true we set the value of s[i] to be typecasted char 0
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
