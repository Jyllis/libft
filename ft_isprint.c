/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylikarp <jylikarp@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 13:31:23 by jylikarp          #+#    #+#             */
/*   Updated: 2022/01/17 19:59:43 by kone             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Checks if c is a printable character (including space). 
** Ascii value 32 through 126.
*/

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
