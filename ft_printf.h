/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalch <akovalch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:41:23 by akovalch          #+#    #+#             */
/*   Updated: 2024/11/20 17:23:12 by akovalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "Libft/libft.h"
# include <unistd.h>
# include <stdint.h>

int	ft_printf(const char *format, ...);
int	ft_printstr(const char *str);
int	ft_puthex(uintptr_t num, int upper);
int	ft_putpointer(void *ptr);
int	ft_putunsigned(unsigned int num);

#endif