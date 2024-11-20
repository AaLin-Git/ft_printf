/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalch <akovalch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 19:01:01 by akovalch          #+#    #+#             */
/*   Updated: 2024/11/20 17:10:12 by akovalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	char *str = "You will discover variadic functions in C.";
	ft_printf("%s", str);
	ft_printf("Hello %s! Number: %d, Char: %c\n", "world", 42, 'A');
	ft_printf(" %d ", 10);
	return (0);
}
