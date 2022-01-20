/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freestrofstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kone <jylikarp@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 12:59:28 by kone              #+#    #+#             */
/*   Updated: 2022/01/20 13:13:51 by kone             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_freestrofstr(char **strofstr)
{
	int	i;

	if (!strofstr)
		return ;
	while (strofstr[i] != 0)
	{
		free(strofstr[i]);
		i++;
	}
	free(strofstr);
}
