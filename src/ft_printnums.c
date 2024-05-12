/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnums.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenow <agenow@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 12:48:16 by agenow            #+#    #+#             */
/*   Updated: 2024/05/12 14:09:51 by agenow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr(size_t nbr)
{
	int		count;

	count = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		count += ft_printchar('-');
	}
	if (nbr > 9)
		count += ft_printnbr(nbr / 10);
	count += ft_printchar((char)(nbr % 10 + 48));
	return (count);
}

int	ft_printuint(size_t n)
{
	int	count;

	count = 0;
	if (n > 9)
		count += ft_printuint(n / 10);
	count += ft_printchar((char)(n % 10 + 48));
	return (count);
}
