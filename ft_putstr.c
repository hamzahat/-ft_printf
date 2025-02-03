/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenmoha <hbenmoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 20:16:30 by hbenmoha          #+#    #+#             */
/*   Updated: 2025/01/10 16:46:34 by hbenmoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str, int *count)
{
	if (!str)
		return (ft_putstr("(null)", count));
	while (*str)
	{
		if (ft_putchar(*str++, count) == -1)
			return (-1);
	}
	return (0);
}
