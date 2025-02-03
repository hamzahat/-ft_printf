/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenmoha <hbenmoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 22:35:34 by hbenmoha          #+#    #+#             */
/*   Updated: 2025/01/11 23:13:44 by hbenmoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_format(const char *c, va_list args, int *count)
{
	if (*c == 'c')
		return (ft_putchar(va_arg(args, int), count));
	if (*c == 's')
		return (ft_putstr(va_arg(args, char *), count));
	if (*c == 'p')
		return (ft_putstr("0x", count), \
				ft_putptr(va_arg(args, unsigned long), count));
	if (*c == 'd' || *c == 'i')
		return (ft_putnbr(va_arg(args, int), count));
	if (*c == 'u')
		return (ft_putunsgd(va_arg(args, unsigned int), count));
	if (*c == 'x' || *c == 'X')
		return (ft_puthexa(va_arg(args, unsigned int), count, c));
	if (*c == '%')
		return (ft_putchar('%', count));
	c++;
	return (0);
}
