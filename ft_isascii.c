/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylikarp <jylikarp@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 13:27:08 by jylikarp          #+#    #+#             */
/*   Updated: 2021/11/19 13:29:09 by jylikarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** If c is between int values 0 & 127, isasciii returns true = 1.
*/

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
