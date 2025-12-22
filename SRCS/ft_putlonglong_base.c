/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlonglong_base.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz <rruiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 11:34:13 by rruiz             #+#    #+#             */
/*   Updated: 2025/11/01 10:14:35 by rruiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	put_percentp(unsigned long long n)
{
	char				*base;
	size_t				len;
	int					count;

	base = "0123456789abcdef";
	len = ft_strlen(base);
	count = 0;
	if (n >= len)
		count += put_percentp(n / len);
	count += ft_putchar(base[n % len]);
	return (count);
}

int	ft_putlonglong_hex(unsigned long long n)
{
	int	count;

	if (n == 0)
	{
		ft_putstr("(nil)");
		return (5);
	}
	count = ft_putstr("0x");
	count += put_percentp(n);
	return (count);
}
