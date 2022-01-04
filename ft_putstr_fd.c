/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylikarp <jylikarp@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 10:33:58 by jylikarp          #+#    #+#             */
/*   Updated: 2021/11/19 11:07:50 by jylikarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Prints out string s into the filedescriptor fd. Includes null string 
** protection. Prints until end is reached.
*/

void	ft_putstr_fd(char const *s, int fd)
{
	int	i;

	i = 0;
	if (!*s)
		return ;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
