/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kone <jylikarp@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 11:41:34 by kone              #+#    #+#             */
/*   Updated: 2021/12/31 12:42:28 by kone             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Applies the function f to each character of the string passed
** as argument, and passing its index as first argument. Each
** character is passed by address to f to be modified if necessary.
** i++,s++ because ++ is done after the values have been passed to 
** the function. 
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s != NULL && *s)
	{
		f(i++, s++);
	}
}
