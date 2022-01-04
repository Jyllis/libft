/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylikarp <jylikarp@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 11:41:51 by jylikarp          #+#    #+#             */
/*   Updated: 2021/11/19 12:00:28 by jylikarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** If c's int value is between A and Z, isupper returns true = 1.
*/

int	ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
