/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakherra <aakherra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 09:23:03 by aakherra          #+#    #+#             */
/*   Updated: 2024/11/14 08:48:29 by aakherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int n, int b, int *p, char *hex)
{
	char	c;

	if (n >= 16)
		ft_puthex((n / 16), b, p, hex);
	if (b && (n % 16) >= 10)
		c = hex[n % 16] - 32;
	else
		c = hex[n % 16];
	*p += write(1, &c, 1);
}
