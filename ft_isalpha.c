/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylikarp <jylikarp@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 12:02:49 by jylikarp          #+#    #+#             */
/*   Updated: 2021/11/19 12:06:33 by jylikarp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** If isupper or islower returns true, then isalpha returns also true = 1.
*/

int	ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}
