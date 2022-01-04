/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylikarp <jylikarp@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 09:31:35 by jylikarp          #+#    #+#             */
/*   Updated: 2021/11/22 11:06:36 by jylikarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocating with malloc a new memory area. Halting incase not successfull
** by returning null. Ft_bzero used to initialize the memory area to 0.
*/

void	*ft_memalloc(size_t size)
{
	void	*data;

	data = malloc(size);
	if (data == NULL)
		return (NULL);
	ft_bzero(data, size);
	return (data);
}
