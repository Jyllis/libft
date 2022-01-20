/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylikarp <jylikarp@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 12:37:35 by jylikarp          #+#    #+#             */
/*   Updated: 2022/01/17 20:04:42 by kone             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Checks if c is a whitespace character. In the "C" and "POSIX" locales,
** these are: space, form-feed ('\f'), newline ('\n'), carriage return ('\r'),
** horizontal tab ('\t') and vertical tab ('\v').
*/

int	ft_isspace(int c)
{
	return (c == '\t' || c == '\n' || c == '\v' || c == '\f'
		|| c == '\r' || c == ' ');
}
