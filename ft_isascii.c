/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylikarp <jylikarp@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 13:27:08 by jylikarp          #+#    #+#             */
/*   Updated: 2022/01/17 19:55:13 by kone             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Checks if c is a 7-bit unsigned char value that fits into the ascii character
** set (between values 0 & 127).
*/

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
