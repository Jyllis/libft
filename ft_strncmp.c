/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kone <jylikarp@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 12:37:02 by kone              #+#    #+#             */
/*   Updated: 2021/11/20 12:45:31 by kone             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Compares lexicographically the null terminated strings s1 & s2 (not more
** than n characters).
** Returns an integer greater than, equal to, or less than 0, according 
** as the string s1 is greater than, equal to, or less than the string s2.
** The comparison is done using unsigned characters, so that `\200' 
** is greater than `\0'.
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0)
	{
		if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		else if (!(*s1))
			return (0);
		s1++;
		s2++;
		n--;
	}
	return (0);
}
