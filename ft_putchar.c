/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenmoha <hbenmoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 19:56:36 by hbenmoha          #+#    #+#             */
/*   Updated: 2025/01/10 16:24:03 by hbenmoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c, int *count)
{
	int	written;

	written = write(1, &c, 1);
	if (written == -1)
		return (-1);
	*count += written;
	return (0);
}
