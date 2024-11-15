/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakherra <aakherra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:49:29 by aakherra          #+#    #+#             */
/*   Updated: 2024/11/12 10:32:20 by aakherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	to_hex(unsigned long n, int *l, char *hex)
{
	if (n >= 16)
		to_hex((n / 16), l, hex);
	*l += write(1, &hex[n % 16], 1);
}

void	ft_putptr(void *p, int *l, char *hex)
{
	if (p)
	{
		*l += write(1, "0x", 2);
		to_hex((unsigned long)p, l, hex);
	}
	else
		*l += write(1, "(nil)", 5);
}
