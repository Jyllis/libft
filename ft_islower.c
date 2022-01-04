/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylikarp <jylikarp@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 11:49:31 by jylikarp          #+#    #+#             */
/*   Updated: 2021/11/19 12:00:34 by jylikarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** If c's int value is between a and z, islower returns true = 1.
*/

int	ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
