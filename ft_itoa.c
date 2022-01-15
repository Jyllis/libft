/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kone <jylikarp@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 16:04:13 by kone              #+#    #+#             */
/*   Updated: 2022/01/15 12:49:50 by kone             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char		*str;
	int			i;

	i = ft_nbramount(n);
	str = ft_strnew(i--);
	if (!str)
		return (NULL);
	if (n == -2147483648)
		str = ft_strdup("-2147483648");
	if (n == 0)
		str = ft_strdup("0");
	if (n < 0 && n != -2147483648)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n > 0 && str[i] != '-')
	{
		str[i] = 48 + n % 10;
		i--;
		n = (n - (n % 10)) / 10;
	}
	return (str);
}
