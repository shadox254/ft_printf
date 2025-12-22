/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz <rruiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 11:52:46 by rruiz             #+#    #+#             */
/*   Updated: 2025/11/01 11:16:13 by rruiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	is_percent(char c, va_list args)
{
	int	count;

	count = 0;
	if (c == 'c')
		count = ft_putchar(va_arg(args, int));
	if (c == 's')
		count = ft_putstr(va_arg(args, char *));
	if (c == 'p')
		count += ft_putlonglong_hex((unsigned long long)va_arg(args, void *));
	if (c == 'd')
		count = ft_putnbr(va_arg(args, int), "0123456789");
	if (c == 'i')
		count = ft_putnbr(va_arg(args, int), "0123456789");
	if (c == 'u')
		count = ft_putnbr_base(va_arg(args, unsigned int), "0123456789");
	if (c == 'x')
		count = ft_putnbr_base(va_arg(args, unsigned int), "0123456789abcdef");
	if (c == 'X')
		count = ft_putnbr_base(va_arg(args, unsigned int), "0123456789ABCDEF");
	if (c == '%')
		count = ft_putchar('%');
	return (count);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		count;
	va_list	args;

	i = 0;
	count = 0;
	if (!s)
		return (0);
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			count += is_percent(s[i + 1], args);
			i++;
		}
		else
		{
			ft_putchar(s[i]);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
