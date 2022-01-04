/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylikarp <jylikarp@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 13:31:23 by jylikarp          #+#    #+#             */
/*   Updated: 2021/11/19 13:34:12 by jylikarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** If c's ascii value is between 32 & 126 (meaning printable character)
** the function returns 1.
*/

int	isprint(int c)
{
	return (c >= 32 && c <= 126);
}
