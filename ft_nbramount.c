/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbramount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kone <jylikarp@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 17:29:27 by kone              #+#    #+#             */
/*   Updated: 2022/01/17 20:23:14 by kone             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Calculates the amount of individual numbers in an integer and possible
** minus sign. 
*/

size_t	ft_nbramount(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
	{
		i = 11;
		return (i);
	}
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	if (n < 10 && n >= 0)
		i++;
	if (n >= 10)
	{
		i += ft_nbramount(n / 10);
		i++;
	}
	return (i);
}
