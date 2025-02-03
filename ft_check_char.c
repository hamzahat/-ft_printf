/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenmoha <hbenmoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 20:15:12 by hbenmoha          #+#    #+#             */
/*   Updated: 2025/01/11 22:53:29 by hbenmoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_check_char(const char *c)
{
	char	*str;

	str = "cspdiuxX%";
	while (*str)
	{
		if (*str == *c)
			return (1);
		str++;
	}
	return (0);
}
