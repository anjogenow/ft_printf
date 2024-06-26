/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenow <agenow@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 12:56:31 by agenow            #+#    #+#             */
/*   Updated: 2024/05/12 14:09:08 by agenow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printshex(size_t n)
{
	char	*base;
	int		count;

	count = 0;
	base = "0123456789abcdef";
	if (n > 15)
		count += ft_printshex(n / 16);
	count += ft_printchar(base[n % 16]);
	return (count);
}

int	ft_printlhex(size_t n)
{
	char	*base;
	int		count;

	count = 0;
	base = "0123456789ABCDEF";
	if (n > 15)
		count += ft_printlhex(n / 16);
	count += ft_printchar(base[n % 16]);
	return (count);
}

int	ft_printptr(size_t n)
{
	int	count;

	count = ft_printf("0x");
	count += ft_printf("%x", n);
	return (count);
}
