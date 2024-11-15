/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakherra <aakherra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 09:17:59 by aakherra          #+#    #+#             */
/*   Updated: 2024/11/12 10:20:07 by aakherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *s, ...);
void	ft_putchar(char c, int *p);
void	ft_putstr(char *s, int *p);
void	ft_putnbr(int n, int *p);
void	ft_putuns(unsigned int n, int *p);
void	ft_puthex(unsigned int n, int c, int *p, char *hex);
void	ft_putptr(void *p, int *l, char *hex);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *s);

#endif
