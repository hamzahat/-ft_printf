/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenmoha <hbenmoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 21:54:03 by hbenmoha          #+#    #+#             */
/*   Updated: 2025/01/11 23:19:00 by hbenmoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	va_start(args, format);
	count = 0;
	while (*format)
	{
		if ((*format == '%') && *(++format))
		{
			if (ft_check_char(format))
			{
				if (ft_check_format(format, args, &count) == -1)
					return (-1);
			}
			else if (ft_putchar(*format, &count) == -1)
				return (-1);
		}
		else if (ft_putchar(*format, &count) == -1)
			return (-1);
		format++;
	}
	va_end(args);
	return (count);
}
