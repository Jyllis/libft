/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kone <jylikarp@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 11:36:51 by kone              #+#    #+#             */
/*   Updated: 2021/11/20 11:46:48 by kone             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Changes lower characters to upper characters
*/

int	ft_toupper(int c)
{
	if (ft_islower(c))
	{
		c -= 32;
	}
	return (c);
}
