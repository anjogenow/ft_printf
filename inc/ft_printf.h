/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenow <agenow@stdent.42berlin.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 13:06:42 by agenow            #+#    #+#             */
/*   Updated: 2024/05/12 14:07:20 by agenow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int	ft_printchar(char c);
int	ft_printstr(char *str);
int	ft_printnbr(size_t n);
int	ft_printuint(size_t n);
int	ft_printshex(size_t n);
int	ft_printlhex(size_t n);
int	ft_printptr(size_t n);
int	ft_modifier(va_list args, char mod);
int	ft_printf(const char *str, ...);

#endif
