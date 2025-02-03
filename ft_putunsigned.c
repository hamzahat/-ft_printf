/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenmoha <hbenmoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 12:07:13 by hbenmoha          #+#    #+#             */
/*   Updated: 2025/01/11 11:15:16 by hbenmoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsgd(unsigned int n, int *count)
{
	if (n > 9)
		if (ft_putunsgd(n / 10, count) == -1)
			return (-1);
	if (ft_putchar((n % 10) + 48, count) == -1)
		return (-1);
	return (0);
}
