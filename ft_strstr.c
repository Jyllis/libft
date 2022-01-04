/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kone <jylikarp@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 10:57:48 by kone              #+#    #+#             */
/*   Updated: 2021/12/31 12:48:45 by kone             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *from, const char *find)
{
	int	pos_n;
	int	pos_h;
	int	len;
	int	lenh;

	len = ft_strlen(find);
	lenh = ft_strlen(from);
	pos_h = 0;
	if (len == 0)
		return ((char *)from);
	while (from[pos_h] && (len <= lenh))
	{
		pos_n = 0;
		while (from[pos_h + pos_n] && from[pos_h + pos_n] == find[pos_n])
		{
			if (!find[pos_n + 1])
				return ((char *)&from[pos_h]);
			pos_n++;
		}
		pos_h++;
	}
	return (NULL);
}
