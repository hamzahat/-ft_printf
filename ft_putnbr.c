/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenmoha <hbenmoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 20:23:14 by hbenmoha          #+#    #+#             */
/*   Updated: 2025/01/10 16:09:39 by hbenmoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb, int *count)
{
	long	num;

	num = nb;
	if (num < 0)
	{
		if (ft_putchar('-', count) == -1)
			return (-1);
		num = -num;
	}
	if (num > 9)
		ft_putnbr(num / 10, count);
	if (ft_putchar((num % 10) + 48, count) == -1)
		return (-1);
	return (0);
}
