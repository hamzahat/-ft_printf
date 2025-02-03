/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenmoha <hbenmoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 12:07:07 by hbenmoha          #+#    #+#             */
/*   Updated: 2025/01/11 23:27:26 by hbenmoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long ptr, int *count)
{
	unsigned long	addr;
	char			*base;

	if (!ptr)
		return (ft_putstr("0", count) == -1);
	base = "0123456789abcdef";
	addr = (unsigned long) ptr;
	if (addr >= 16)
		if (ft_putptr((addr / 16), count) == -1)
			return (-1);
	if (ft_putchar(base[addr % 16], count) == -1)
		return (-1);
	return (0);
}
