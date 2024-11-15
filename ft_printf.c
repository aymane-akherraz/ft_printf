/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakherra <aakherra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 09:03:07 by aakherra          #+#    #+#             */
/*   Updated: 2024/11/13 10:43:47 by aakherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_formats(const char *s, unsigned int i, va_list args, char *hex)
{
	int		l;

	l = 0;
	if (s[i] == 'c')
		ft_putchar(va_arg(args, int), &l);
	else if (s[i] == 's')
		ft_putstr(va_arg(args, char *), &l);
	else if (s[i] == 'd' || s[i] == 'i')
		ft_putnbr(va_arg(args, int), &l);
	else if (s[i] == 'u')
		ft_putuns(va_arg(args, unsigned int), &l);
	else if (s[i] == 'x')
		ft_puthex(va_arg(args, unsigned int), 0, &l, hex);
	else if (s[i] == 'X')
		ft_puthex(va_arg(args, unsigned int), 1, &l, hex);
	else if (s[i] == '%')
		ft_putchar('%', &l);
	else if (s[i] == 'p')
		ft_putptr(va_arg(args, void *), &l, hex);
	return (l);
}

int	ft_printf(const char *s, ...)
{
	int				l;
	char			hex[17];
	va_list			args;
	unsigned int	i;

	if (!s)
		return (-1);
	va_start(args, s);
	i = 0;
	l = 0;
	ft_strlcpy(hex, "0123456789abcdef", 17);
	while (s[i])
	{
		if (s[i] == '%' && s[i + 1])
			l += handle_formats(s, ++i, args, hex);
		else
			ft_putchar(s[i], &l);
		i++;
	}
	va_end(args);
	return (l);
}
