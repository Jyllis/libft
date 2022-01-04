/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylikarp <jylikarp@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:55:14 by jylikarp          #+#    #+#             */
/*   Updated: 2021/12/31 12:32:45 by kone             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Writing number n into standard output. If n equals to MIN then uses
** putstr. Else if value is above 10 the modulus10 is saved onto i  and 
** value of n is divided by 10 and sent to the same function again until
** value below 10 is reached. When that happens it is able to print the first
** number and reach the end of the function and return from inception and
** print the rest of the numbers.
*/

void	ft_putnbr(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n < 10 && n >= 0)
		ft_putchar(n + '0');
	if (n >= 10)
	{
		i = n % 10;
		ft_putnbr(n / 10);
		ft_putchar(i + '0');
	}
}
