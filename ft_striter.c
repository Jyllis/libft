/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kone <jylikarp@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 11:12:19 by kone              #+#    #+#             */
/*   Updated: 2021/11/27 11:38:57 by kone             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*  Iterates function f to string s, starting from 0.
**	Because ++ is after s, the addition will be done after the the function
**	has been applied to the strings current location.
*/

void	ft_striter(char *s, void (*f)(char *))
{
	if (s == NULL || f == NULL)
		return ;
	while (*s && s != NULL)
	{
		f(s++);
	}
}
