/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalch <akovalch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:44:14 by akovalch          #+#    #+#             */
/*   Updated: 2024/11/20 16:42:27 by akovalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstr(const char *str)
{
	int	len;

	len = 0;
	if (!str)
		str = "(null)";
	len += ft_putstr(str);
	return (len);
}

int	ft_puthex(uintptr_t num, int upper)
{
	char	*hex;
	char	*upper_hex;
	int		len;

	hex = "0123456789abcdef";
	upper_hex = "0123456789ABCDEF";
	len = 0;
	if (num >= 16)
		len += ft_puthex((num / 16), upper);
	if (upper)
		len += ft_putchar(upper_hex[num % 16]);
	else
		len += ft_putchar(hex[num % 16]);
	return (len);
}

int	ft_print_pointer(void *ptr)
{
	int	len;

	len = 0;
	if (!ptr)
		return (ft_printstr("(nil)"));
	len += ft_putstr("0x");
	len += ft_puthex((uintptr_t)ptr, 0);
	return (len);
}

int	ft_print_unsigned(unsigned int num)
{
	int		len;
	int		i;
	char	str[10];

	len = 0;
	i = 0;
	if (num == 0)
	{
		len += ft_putchar('0');
		return (len);
	}
	while (num > 0)
	{
		str[i++] = (num % 10) + '0';
		num /= 10;
	}
	while (i-- > 0)
		len += ft_putchar(str[i]);
	return (len);
}
