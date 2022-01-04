/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kone <jylikarp@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 11:51:30 by kone              #+#    #+#             */
/*   Updated: 2021/11/20 11:59:12 by kone             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

/*
** Changes upper characters to lower characters
*/

int	ft_tolower(int c)
{
	if (ft_isupper(c))
	{	
		c += 32;
	}
	return (c);
}
