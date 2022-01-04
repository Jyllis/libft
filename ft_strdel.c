/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylikarp <jylikarp@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:58:08 by jylikarp          #+#    #+#             */
/*   Updated: 2021/11/22 16:04:53 by jylikarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Takes as a parameter the address of a string that need to be
** freed with free(3), then sets its pointer to NULL.
*/

void	ft_strdel(char **as)
{
	if (!(as))
	{
		free(*as);
		*as = NULL;
	}
}
