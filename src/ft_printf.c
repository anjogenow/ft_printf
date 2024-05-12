/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenow <agenow@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 13:16:54 by agenow            #+#    #+#             */
/*   Updated: 2024/05/12 13:56:52 by agenow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		len;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
			len += ft_modifier(args, str[++i]);
		else
			len += ft_printchar(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}

int	ft_modifier(va_list args, char mod)
{
	if (mod == 'c')
		return (ft_printchar(va_arg(args, int)));
	else if (mod == 's')
		return (ft_printstr(va_arg(args, char *)));
	else if (mod == 'p')
		return (ft_printptr(va_arg(args, unsigned long long)));
	else if (mod == 'd' || mod == 'i')
		return (ft_printnbr(va_arg(args, int)));
	else if (mod == 'u')
		return (ft_printuint(va_arg(args, unsigned int)));
	else if (mod == 'x')
		return (ft_printshex(va_arg(args, unsigned long long)));
	else if (mod == 'X')
		return (ft_printlhex(va_arg(args, unsigned long long)));
	else if (mod == '%')
		return (ft_printchar('%'));
	return (0);
}
