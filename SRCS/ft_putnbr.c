/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz <rruiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:29:33 by rruiz             #+#    #+#             */
/*   Updated: 2025/11/01 16:20:25 by rruiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putnbr(int n, char *base)
{
	unsigned int	nb;
	unsigned int	len;
	int				result;

	result = 0;
	len = ft_strlen(base);
	if (n < 0)
	{
		result += ft_putchar('-');
		nb = -n;
	}
	else
		nb = n;
	if (nb >= len)
		result += ft_putnbr(nb / len, base);
	result += ft_putchar(base[nb % len]);
	return (result);
}
