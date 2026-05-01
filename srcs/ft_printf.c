/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nda-roch <nda-roch@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 14:51:39 by nda-roch          #+#    #+#             */
/*   Updated: 2026/05/01 18:36:21 by nda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	va_list	ap;

	va_start(ap, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
				count = count + ft_putchar((char)va_arg(ap, int));
			else if (format[i + 1] == 's')
				count = count + ft_putstr(va_arg(ap, char *));
			else if (format[i + 1] == 'p')
				count = count + ft_putptr(va_arg(ap, void *));
			else if (format[i + 1] == 'd')
				count = count + ft_putnbr(va_arg(ap, int));
			else if (format[i + 1] == 'i')
				count = count + ft_putnbr(va_arg(ap, int));
			else if (format[i + 1] == 'u')
				count = count + ft_putnbr_u(va_arg(ap, unsigned int));
			else if (format[i + 1] == 'x')
				count = count + ft_puthex(va_arg(ap, unsigned int), "0123456789abcdef");
			else if (format[i + 1] == 'X')
				count = count + ft_puthex(va_arg(ap, unsigned int), "0123456789ABCDEF");
			else if (format[i + 1] == '%')
				count = count + ft_putchar('%');
			else
				count = count + ft_putchar(format[i]);
			i++;
		}
		i++;
	}
	va_end(ap);
	return (count);
}
