/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kone <jylikarp@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 12:05:15 by kone              #+#    #+#             */
/*   Updated: 2021/11/20 12:33:45 by kone             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Compares lexicographically the null terminated strings s1 & s2 
** Returns an integer greater than, equal to, or less than 0, according 
** as the string s1 is greater than, equal to, or less than the string s2.
** The comparison is done using unsigned characters, so that `\200' 
** is greater than `\0'.
*/

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
