/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalch <akovalch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:44:03 by akovalch          #+#    #+#             */
/*   Updated: 2024/11/20 16:40:59 by akovalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	check_format(va_list args, const char *format)
{
	int	count_len;

	count_len = 0;
	if (*format == 'c')
		count_len += ft_putchar(va_arg(args, int));
	else if (*format == 's')
		count_len += ft_printstr(va_arg(args, const char *));
	else if (*format == 'd' || *format == 'i')
		count_len += ft_putnbr(va_arg(args, int));
	else if (*format == 'p')
		count_len += ft_print_pointer(va_arg(args, void *));
	else if (*format == 'u')
		count_len += ft_print_unsigned(va_arg(args, unsigned int));
	else if (*format == 'x')
		count_len += ft_puthex(va_arg(args, unsigned int), 0);
	else if (*format == 'X')
		count_len += ft_puthex(va_arg(args, unsigned int), 1);
	else if (*format == '%')
		count_len += ft_putchar('%');
	return (count_len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count_len;

	va_start(args, format);
	count_len = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count_len += check_format(args, format);
		}
		else
			count_len += ft_putchar(*format);
		format++;
	}
	va_end(args);
	return (count_len);
}
