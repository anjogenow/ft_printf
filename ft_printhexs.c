/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenow <agenow@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 12:56:31 by agenow            #+#    #+#             */
/*   Updated: 2024/05/11 13:25:17 by agenow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printshex(unsigned int n)
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

int	ft_printlhex(unsigned int n)
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

int	ft_printptr(unsigned long long n)
{
	(void) n;
	return (1);
}
