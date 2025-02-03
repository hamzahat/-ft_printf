/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenmoha <hbenmoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 12:06:40 by hbenmoha          #+#    #+#             */
/*   Updated: 2025/01/11 23:23:22 by hbenmoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned int num, int *count, const char *c)
{
	char	*base;

	if (*c == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (num >= 16)
		if (ft_puthexa(num / 16, count, c) == -1)
			return (-1);
	if (ft_putchar(base[num % 16], count) == -1)
		return (-1);
	return (0);
}
