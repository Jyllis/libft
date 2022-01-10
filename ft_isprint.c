/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylikarp <jylikarp@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 13:31:23 by jylikarp          #+#    #+#             */
/*   Updated: 2022/01/06 10:45:39 by kone             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** If c's ascii value is between 32 & 126 (meaning printable character)
** the function returns 1.
*/

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
