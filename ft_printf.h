/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rruiz <rruiz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 11:49:35 by rruiz             #+#    #+#             */
/*   Updated: 2025/11/01 09:52:46 by rruiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <ctype.h> 
# include <unistd.h>

int		ft_printf(const char *s, ...);
int		ft_putstr(char *s);
int		ft_putchar(char c);
size_t	ft_strlen(const char *s);
int		ft_putnbr(int n, char *base);
int		ft_putnbr_base(unsigned int n, char *base);
int		ft_putlonglong_hex(unsigned long long n);
int		ft_intlen(unsigned long long num, int len_base);

#endif