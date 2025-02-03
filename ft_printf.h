/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenmoha <hbenmoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 19:21:20 by hbenmoha          #+#    #+#             */
/*   Updated: 2025/01/11 23:19:54 by hbenmoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_check_format(const char *c, va_list args, int *count);
int	ft_puthexa(unsigned int num, int *count, const char *c);
int	ft_putptr(unsigned long ptr, int *count);
int	ft_putunsgd(unsigned int n, int *count);
int	ft_putstr(char *str, int *count);
int	ft_putchar(char c, int *count);
int	ft_putnbr(int nb, int *count);
int	ft_check_char(const char *c);

#endif
